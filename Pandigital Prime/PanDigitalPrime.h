//file		:	PanDigitalPrime.h
//author	:	steaKK

#ifndef PanDigitalPrime_H
#define PanDigitalPrime_H

#include <iostream>
#include <string>
#include <omp.h>

using namespace std;
// using namespace omp;

class PanDigitalPrime {
public:
	static bool is_pandigital(long);
	static bool is_prime(long);
	static bool is_pandigitalprime(long);
	static long highest_pandigitalprime();

};

#endif
