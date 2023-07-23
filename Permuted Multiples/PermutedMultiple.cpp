//file		:	PermutedMultiple.cpp
//author	:	steaKK

#include "PermutedMultiple.h"

long PermutedMultiple::solve(long x) {
	for(long i=1;i<=x;i++) {
		if(is_samemultiple(i,6)) return i;
	}
	return -1;
}

bool PermutedMultiple::is_containsame(long x, long y) {
	if(to_string(x).length() != to_string(y).length()) return false;
	else {
		if(get_histogram(x)==get_histogram(y)) return true;
		else return false;
	}
}

vector<int> PermutedMultiple::get_histogram(long x) {
	string temp = to_string(x);
	vector<int> result;
	for(int i=0;i<10;i++) result.push_back(0);
	for(int i=0;i<temp.length();i++) result[temp.at(i)-48]++;
	return result;
}

bool PermutedMultiple::is_samemultiple(long x, int t) {
	for(int i=2;i<t+1;i++) {
		if(!is_containsame(x,x*i)) return false;
	}
	return true;
}
