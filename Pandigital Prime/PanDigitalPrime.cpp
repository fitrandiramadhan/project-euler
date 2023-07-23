//file		:	PanDigitalPrime.cpp
//author	:	steaKK

#include "PanDigitalPrime.h"

bool PanDigitalPrime::is_prime(long x) {
	cout << "checking = " << x << endl;
	long count = 0;
	if(x%2==0) return false;
	omp_set_num_threads(8);
	#pragma omp parallel for
	for(long i=3;i<x/2;i+=2) {
		if(x%i==0) count++;
	}
	if(count>0) return false;
	else return true;
}

bool PanDigitalPrime::is_pandigital(long x) {
	string number = std::to_string(x);
	int histogram[10] = {0,0,0,0,0,0,0,0,0,0};
	for(int i=0;i<number.size();i++) {
		histogram[number.at(i)-48]++;
	}
	for(int i=0;i<10;i++) {
		if(histogram[i]>1) return false;
	}
	return true;
}

bool PanDigitalPrime::is_pandigitalprime(long x) {
	if(!is_pandigital(x)) return false;
	else {
		if(is_prime(x)) return true;
		else return false;
	}
}

long PanDigitalPrime::highest_pandigitalprime() {
	for(long i=9999999999;i>2;i--) {
		// cout << "checking = " << i << endl;
		if(is_pandigitalprime(i)) return i;
	}
	return -1;
}
