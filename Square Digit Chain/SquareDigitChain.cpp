//file		:	SquareDigitChain.cpp
//author	:	steaKK

#include "SquareDigitChain.hpp"

bool SquareDigitChain::is_done(long x) {
	if(x==1 || x==89) return true;
	else return false;
}

bool SquareDigitChain::is_89(long x) {
	if(x==89) return true;
	else return false;
}

long SquareDigitChain::run_once(long x) {
	long result = 0;
	string temp = to_string(x);
	for(int i=0;i<temp.length();i++) {
		result += (temp.at(i)-48)*(temp.at(i)-48);
	}
	return result;
}

bool SquareDigitChain::run_through(long x) {
	long temp = x;
	// cout << "temp = " << temp << ", is_done(temp) " << is_done(temp) << endl;
	while(!is_done(temp)) {
		// cout << "aloha1 temp = " << temp << endl;
		temp = run_once(temp);
	}
	if(!is_89(temp)) return true;
	else return false;
}

long SquareDigitChain::solve(long x) {
	long result = 0;
	for(int i=1;i<x;i++) {
		// cout << "running " << i << endl;
		if(run_through(i)) result++;
	}
	return result;
}
