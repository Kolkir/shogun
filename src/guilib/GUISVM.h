#ifndef _GUISVM_H__
#define _GUISVM_H__ 

#include "svm/SVM.h"
#include "svm/SVM_light.h"
#include "svm_cplex/SVM_cplex.h"

#ifdef SVMMPI
#include "svm_mpi/mpi_svm.h"
#endif

class CGUI ;

class CGUISVM
{

public:
	CGUISVM(CGUI*);
	~CGUISVM();

	bool new_svm(char* param);
	bool train(char* param);
	bool test(char* param);
	bool set_kernel();
	bool get_kernel();
	bool set_preproc();
	bool get_preproc();
	bool load(char* param);
	bool save(char* param);
	bool set_C(char* param);

 protected:
	CGUI* gui;
	CSVM* svm;
	double C;
};
#endif
