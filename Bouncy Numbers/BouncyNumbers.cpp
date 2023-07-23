//file		:	BouncyNumbers.cpp
//author	:	steaKK

#include "BouncyNumbers.hpp"

bool BouncyNumbers::is_bouncy(int x) {
	if(is_crescendo(x) || is_decrescendo(x)) return false;
	else return true;
}

bool BouncyNumbers::is_crescendo(int x) {
	string temp = to_string(x);
	for(int i=0;i+1<temp.length();i++) {
		if(temp.at(i)>temp.at(i+1)) return false;
	}
	return true;
}

bool BouncyNumbers::is_decrescendo(int x) {
	string temp = to_string(x);
	for(int i=0;i+1<temp.length();i++) {
		if(temp.at(i)<temp.at(i+1)) return false;
	}
	return true;
}

// string BouncyNumbers::to_string(int x) {
// 	stringstream ss;
// 	ss << x;
// 	return ss.str();
// }

float BouncyNumbers::solve(float x) {
	long n = 1;
	long n_bouncy = 1;
	float temp = (float)n_bouncy/(float)n;
	while(temp!=x) {
		n++;
		if(is_bouncy(n)) {
			// cout << n << " = is_bouncy" << endl;
			n_bouncy++;
		}
		// cout << temp << endl;
	}
	return n;
}
