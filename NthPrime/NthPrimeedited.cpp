//file		:	NthPrime.cpp
//author	:	steaKK

#include "NthPrime.h"


NthPrime::NthPrime() {
	nth = DEFAULT_NTH;
	data = new long[DEFAULT_DATA_SIZE];
	for(int i=0;i<DEFAULT_DATA_SIZE;i++) {
		data[i] = -1;
	}
	data[0] = 2;
	data[1] = 3;
	size = 2;
}

NthPrime::NthPrime(int _nth) {
	nth = _nth;
	data = new long[DEFAULT_DATA_SIZE];
	for(int i=0;i<DEFAULT_DATA_SIZE;i++) {
		data[i] = -1;
	}
	data[0] = 2;
	data[1] = 3;
	size = 2;
}

NthPrime::NthPrime(const NthPrime& _NthPrime) {
	nth = _NthPrime.nth;
	size = _NthPrime.size;
	data = new long[DEFAULT_DATA_SIZE];
	for(int i=0;i<DEFAULT_DATA_SIZE;i++) {
		data[i] = _NthPrime.data[i];
	}
}

NthPrime& NthPrime::operator=(const NthPrime& _NthPrime) {
	nth = _NthPrime.nth;
	size = _NthPrime.size;
	for(int i=0;i<DEFAULT_DATA_SIZE;i++) {
		data[i] = _NthPrime.data[i];
	}
	return *this;
}


NthPrime::~NthPrime() {
	delete data;
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
	for(long i=0;i<size;i++) {
		if(x%data[i]==0) return false;
	}
	return true;
}


long NthPrime::solve_sequential() {
	for(long i=data[size-1]+2;size<nth;i+2) {
		cout << i << endl;
		if(islastprime(i)) {
			data[size] = i;
			size++;
			i++;
		}
	}
	return data[size-1];
}

// long NthPrime::solve_parallel() {
	// #pragma omp parallel for
	// for(long i=data[size-1];size<nth;i++) {
		// if(islastprime(i)) {
			// data[size] = i;
			// i++;
		// }
	// }
	// return data[size-1];
// }

























