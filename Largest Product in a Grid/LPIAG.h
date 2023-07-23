//file		:	LPIAG.h
//author	:	steaKK

#ifndef LPIAG_H
#define LPIAG_H

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

class LPIAG {
public:
	LPIAG();
	LPIAG(string);
	LPIAG(const LPIAG&);
	LPIAG& operator=(const LPIAG&);
	~LPIAG();

	int get_data(int,int);
	void set_data(int,int,int);

	void print();

	int sum_horizontal(int,int);
	int sum_vertical(int,int);
	int sum_diagonal1(int,int);
	int sum_diagonal2(int,int);
	int max2(int,int);
	int max3(int,int,int);

	int solve();

private:
	vector<vector<int> > data;
};

#endif
