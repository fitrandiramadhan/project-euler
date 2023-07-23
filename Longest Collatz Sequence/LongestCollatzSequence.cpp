//file		:	LongestCollatzSequence.cpp
//author	:	steaKK

#include "LongestCollatzSequence.hpp"

bool LongestCollatzSequence::is_even(long x) {
	if(x%2==0) return true;
	else return false;
}

long LongestCollatzSequence::run_odd(long x) {
	return x*3+1;
}

long LongestCollatzSequence::run_even(long x) {
	return x/2;
}

long LongestCollatzSequence::run_through(long x) {
	long result = 0;
	long temp = x;
	while(temp!=1) {
		result++;
		if(is_even(temp)) temp = run_even(temp);
		else temp = run_odd(temp);
	}
	return result;
}

long LongestCollatzSequence::solve(long x) {
	long result = 0;
	long temp = 0;
	for(long i=1;i<x;i++) {
		long highest_chain = run_through(i);
		// cout << "sequence ke-" << i << endl;
		if(highest_chain>temp) {
			temp = highest_chain;
			result = i;
		}
	}
	return result;
}

long LongestCollatzSequence::max(long x, long y) {
	if(x>y) return x;
	else return y;
}
