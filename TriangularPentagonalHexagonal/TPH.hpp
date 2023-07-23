//file		:	TPH.hpp
//author	:	steaKK

#ifndef TPH_HPP
#define TPH_HPP

#include <iostream>
#include <vector>

using namespace std;

class TPH {
public:
	static int triangular(int);
	static int pentagonal(int);
	static int hexagonal(int);
	static int run(int,int);
	static int solve(int);
	static int min(vector<int>);
	static bool all_same(vector<int>);
};

#endif
