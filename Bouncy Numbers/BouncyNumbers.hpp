//file		:	BouncyNumbers.hpp
//author	:	steaKK

#ifndef BouncyNumbers_HPP
#define BouncyNumbers_HPP

#include <iostream>
#include <string>

using namespace std;

class BouncyNumbers {
public:
	static bool is_bouncy(int);
	static bool is_crescendo(int);
	static bool is_decrescendo(int);
	static float solve(float);

	// static string to_string(int);
};

#endif
