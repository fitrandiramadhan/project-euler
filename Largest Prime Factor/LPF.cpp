//file		:	LPF.cpp
//author	:	steaKK

#include "LPF.h"

long LPF::solve(long x) {
	for(long i=2;i<x/2+1;i++) {
		if(x%i==0) {
			long temp = x/i;
			if(isprime(temp)) return temp;
		}
	}
	return -1;
}

bool LPF::isprime(long x) {
	long count = 0;
	omp_set_num_threads(omp_get_num_procs());
	#pragma omp parallel for
	for(long i=2;i<x/2;i++) {
		if(x%i==0) count++;
	}
	if(count>0) return false;
	else return true;
}
