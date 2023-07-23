//file		:	CPS.cpp
//author	:	steaKK

#include "CPS.h"

long CPS::highest(long x) {
	Primes P;
	P.init_table(x);

}

bool NthPrime::isprime(long x) {
	long count = 0;
	omp_set_num_threads(omp_get_num_procs());
	#pragma omp parallel for
	for(long i=2;i<x/2;i++) {
		if(x%i==0) count++;
	}
	if(count>0) return false;
	else return true;
}
