//file		:	SmallestMultiple.cpp
//author	:	steaKK

#include "SmallestMultiple.h"

bool SmallestMultiple::is_evenly1to20(long x) {
	if(x%11==0 && x%12==0 && x%13==0 && x%14==0 && x%15==0 && x%16==0 && x%17==0 && x%18==0 && x%19==0 && x%20==0) {
		return true;
	}
	else return false;
}

long SmallestMultiple::solve(long a, long b) {
	omp_set_num_threads(omp_get_num_procs());
	long result = -1;
	#pragma omp parallel for
	for(long i=a;i<b+1;i++) {
		if(is_evenly1to20(i)) result = i;
	}
	return result;
}
