//file		:	LargeSum.h
//author	:	steaKK

#ifndef LargeSum_H
#define LargeSum_H

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class LargeSum {
public:
	LargeSum();
	LargeSum(string);
	LargeSum(const LargeSum&);
	LargeSum& operator=(const LargeSum&);
	~LargeSum();

	string get_data(int);
	void set_data(int,string);

	string solve();

private:
	vector<vector<int> > data;
};

#endif
