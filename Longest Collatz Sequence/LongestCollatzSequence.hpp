//file		:	LongestCollatzSequence.hpp
//author	:	steaKK

#ifndef LongestCollatzSequence_HPP
#define LongestCollatzSequence_HPP

#include <iostream>

using namespace std;

class LongestCollatzSequence {
public:
	static long run_even(long);
	static long run_odd(long);
	static long run_through(long);
	static bool is_even(long);
	static long solve(long);
	static long max(long,long);
};

#endif
