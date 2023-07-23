//file		:	LPP.h
//author	:	steaKK

#ifndef LPP_H
#define LPP_H

#include <iostream>
#include <string>
#include <omp.h>

using namespace std;

class LPP {
public:
	static bool is_palindrome(string);
	static int solve(int,int);
};

#endif
