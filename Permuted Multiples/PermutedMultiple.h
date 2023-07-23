//file		:	PermutedMultiple.h
//author	:	steaKK

#ifndef PermutedMultiple_H
#define PermutedMultiple_H

#include <iostream>

using namespace std;

class PermutedMultiple {
public:
	static long solve(long);
	static bool is_containsame(long,long);
	static vector<int> get_histogram(long);
	static bool is_samemultiple(long,long);
};

#endif
