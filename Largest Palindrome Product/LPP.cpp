//file		:	LPP.cpp
//author	:	steaKK

#include "LPP.h"

bool LPP::is_palindrome(string s) {
	for(int i=0;i<s.size()/2;i++) {
		if(s.at(i)!=s.at(s.size()-(1+i))) return false;
	}
	return true;
}

int LPP::solve(int begin, int end) {
	for(int i=end;i>=begin;i--) {
		for(int j=end;j>=begin;j--) {
			cout << i << " " << j << " = " << i*j << endl;
			if(is_palindrome(to_string(i*j))) {
				return i*j;
			}
		}
	}
	return -1;
}
