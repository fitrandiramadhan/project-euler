//file		:	SPT.cpp
//author	:	steaKK

#include "SumPrimes.h"

long SumPrimes::solve(long x) {
	if(x<2) return 0;
	else if(x<3) return 2;
	else if(x<4) return 5;
	else {
		long result = 0;
		for(long i=4;i<x;i++) {
			// cout << i << endl;
			if(is_prime(i)) result += i;
		}
		return result + 5;
	}
}

bool SumPrimes::is_prime(long x) {
	long count = 0;
	if(x%2==0) return false;
	omp_set_num_threads(omp_get_num_procs());
	#pragma omp parallel for
	for(long i=3;i<x/2;i+=2) {
		if(x%i==0) count++;
	}
	if(count>0) return false;
	else return true;
}
