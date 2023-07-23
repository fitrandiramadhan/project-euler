//file		:	DBP.cpp
//author	:	steaKK

#include "DBP.h"

bool DBP::is_palindrome(string x) {
	for(int i=0;i<x.length();i++) {
		if(x.at(i)!=x.at(length-1-i)) return false;
	}
	return true;
}

string DBP::to_binary(long x, long base) {
	long temp = x;
	string result = "";
	do {
		result = ((temp%base)+48) + result;
		temp = temp/base;
	} while(temp>0);
	if(result.at(0)) return result.substr(1);
	else return result;
}

long DBP::solve(long x, long base) {
	long result = 0;
	for(long i=0;i<x+1;i++) {
		if(is_palindrome(to_string(i))) {
			if(is_palindrome(to_binary(i))) result += i;
		}
	}
	return result;
}
