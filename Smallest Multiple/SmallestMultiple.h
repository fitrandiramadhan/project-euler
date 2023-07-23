//file		:	SmallestMultiple.h
//author	:	steaKK

#ifndef SmallestMultiple_H
#define SmallestMultiple_H

#include <iostream>
#include <omp.h>

using namespace std;

class SmallestMultiple {
public:
	static bool is_evenly1to20(long);
	static long solve(long,long);
};

#endif
