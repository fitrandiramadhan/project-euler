//file		:	NthPrime.cpp
//author	:	steaKK

#include "NthPrime.h"


NthPrime::NthPrime() {
	nth = DEFAULT_NTH;
	nthreads = omp_get_num_procs();;
}

NthPrime::NthPrime(int _nth) {
	nth = _nth;
	nthreads = omp_get_num_procs();;
}

NthPrime::NthPrime(const NthPrime& _NthPrime) {
	nthreads = omp_get_num_procs();;
	nth = _NthPrime.nth;
	data = _NthPrime.data;
}

NthPrime& NthPrime::operator=(const NthPrime& _NthPrime) {
	nthreads = omp_get_num_procs();;
	nth = _NthPrime.nth;
	data = _NthPrime.data;
	
	return *this;
}


NthPrime::~NthPrime() {
	
}

long NthPrime::getnth() {
	return nth;
}

long NthPrime::getdata(long i) {
	return data[i];
}

void NthPrime::setnth(long _nth) {
	nth = _nth;
}

void NthPrime::setdata(long i, long _data) {
	data[i] = _data;
}

bool NthPrime::islastprime(long x) {
	for(long i=0;i<data.size();i++) {
		if(x%data[i]==0) return false;
	}
	return true;
}

bool NthPrime::isprime(long x) {
	// omp_set_num_threads(nthreads);
	// #pragma omp parallel
	for(long i=2;i<x/2;i++) {
		if(x%i==0) return false;
	}
	return true;
}

long NthPrime::solve_sequential_bad() {
	long count = 1;
	long result = 3;
	for(long i=3;count<=nth;i++) {
		if(isprime(i)) {
			count++;
			result = i;
		}
	}
	return result;
}

long NthPrime::solve_sequential() {
	for(long i=data.back();data.size()<nth;i++) {
		if(islastprime(i)) data.push_back(i);
	}
	return data.back();
}

long NthPrime::solve_parallel() {
	// #pragma omp parallel for
    // for(long i=data.back();data.size()<nth;i++) {
		// if(islastprime(i)) data.push_back(i);
	// }
	// return data.back();
	
	// long count = 1;
	// long result = 3;
	// for(long i=3;count<=nth;i++) {
		// for(long i=2;i<x/2;i++) {
			// if(x%i==0) return false;
		// }
		// if(isprime(i)) {
			// count++;
			// result = i;
		// }
	// }
	// return result;
	

	// for (int i=1; i<=nth; i++) {
		// long count = 0;
		// omp_set_num_threads(nthreads);
		// #pragma omp parallel for
		// for (int j=2;j<i;j++) {
			// if (i%j == 0) {
				// count++;
			// }
		// }
		// if (count==0){
			// data.push_back(i);
		// }
	// }
	// return data.back();
	
	int temp[nth];
	int x=0;
	for (int a=1; a<=nth;a++) {
	int count = 0;
	omp_set_num_threads(omp_get_num_procs());
	#pragma omp parallel for
		for (int b = 1; b <= a; b++) {
			if (a%b == 0) {
				count++;
			}
		}
		if (count == 2) {
			prima[x] = a;
			x++;
		}
	}
	return temp[x]
}

























