//file		:	HDTN.cpp
//author	:	steaKK

#include "HDTN.h"

long HDTN::solve(int x) {
	int count = 0;
	long i=0;
	while(count<=x) {
		i++;
		cout << i << endl;
		long temp = 0;
		omp_set_num_threads(omp_get_num_procs());
		#pragma omp parallel for
		for(long j=1;j<i;j++) {
			temp += j;
		}
		count = n_factor(temp);
	}
	return i;
}

int HDTN::n_factor(long x) {
	int result = 0;
	omp_set_num_threads(omp_get_num_procs());
	#pragma omp parallel for
	for(int i=1;i<=x/2;i++) {
		if(x%i==0) result++;
	}
	return result;
}
