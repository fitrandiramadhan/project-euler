//file		:	NthPrime.cpp
//author	:	steaKK

#include "NthPrime.h"

NthPrime::NthPrime() {
	nth = DEFAULT_NTH;
	data.push_back(2);
}

NthPrime::NthPrime(int _nth) {
	nth = _nth;
	data.push_back(2);
}

NthPrime::NthPrime(const NthPrime& _NthPrime) {
	nth = _NthPrime.nth;
	data = _NthPrime.data;
}

NthPrime& NthPrime::operator=(const NthPrime& _NthPrime) {
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

bool NthPrime::islastprime_sequential(long x) {
	long count = 0;
	for(long i=0;i<data.size();i++) {
		// cout << i << endl;
		if(x%data[i]==0) count++;
	}
	if(count>0) return false;
	else return true;
}

bool NthPrime::islastprime_parallel(long x) {
	long count = 0;
	omp_set_num_threads(omp_get_num_procs());
	#pragma omp parallel for
	for(long i=0;i<data.size();i++) {
		// cout << i << endl;
		if(x%data[i]==0) count++;
	}
	if(count>0) return false;
	else return true;
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

long NthPrime::solve_sequential() {
	for(long i=data.back();data.size()<nth;i++) {
		if(islastprime_sequential(i)) data.push_back(i);
	}
	return data.back();
}

long NthPrime::solve_parallel() {
    // for(long i=3;data.size()<nth;i+=2) {
		// if(islastprime_parallel(i)) data.push_back(i);
	// }
	// return data.back();
	// long count  = 1;
	// for(long i=3;i<1000000;i+=2) {
	// 	cout << "i = " << i << endl;
	// 	if(islastprime_parallel(i)) {
	// 		data.push_back(i);
	// 	}
	// }

	int i=3;
	while(data.size()<nth) {
		cout << "i = " << i << endl;
		if(islastprime_parallel(i)) data.push_back(i);
		i+=2;
	}

	return data.back();
}
