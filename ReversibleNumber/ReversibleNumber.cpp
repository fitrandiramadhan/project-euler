//file		:	ReversibleNumber.cpp
//author	:	steaKK

#include "ReversibleNumber.hpp"

long ReversibleNumber::reverse(long x) {
	string s = to_string(x);
	string result = "";
	for(int i=1;i<=s.length();i++) {
		result += s.at(s.length()-i);
	}
	return stoi(result);
}

bool ReversibleNumber::is_odd(long x) {
	if(x%2==0) return false;
	else return true;
}

long ReversibleNumber::solve(long x) {
	long result = 0;
	for(long i=0;i<x;i++) {
		// cout << "checking number = " << i << endl;
		if(i%10!=0) {
			if(is_odd(i+reverse(i))) result++;
		}
	}
	return result;
}
