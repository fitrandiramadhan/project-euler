//file		:	SumPrimes.h
//author	:	steaKK

#ifndef SumPrimes_H
#define SumPrimes_H

#include <iostream>
#include <omp.h>

using namespace std;

class SumPrimes {
public:
	static long solve(long);
	static bool is_prime(long);
};

#endif
