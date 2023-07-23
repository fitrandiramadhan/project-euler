//file		:	PrimePairSet.hpp
//author	:	steaKK

#ifndef PrimePairSet_HPP
#define PrimePairSet_HPP

#include <iostream>
#include <vector>

using namespace std;

class PrimePairSet {
public:
	PrimePairSet();
	~PrimePairSet();

	void populate();

	vector<long> solve();
	long concat(bool,long);

	bool is_prime(long);
	bool contain(long);
private:
	Prime data;
};

#endif
