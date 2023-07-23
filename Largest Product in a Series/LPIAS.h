//file		:	LPIAS.h
//author	:	steaKK

#ifndef LPIAS_H
#define LPIAS_H
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class LPIAS {
public:
	LPIAS();
	LPIAS(string);
	LPIAS(const LPIAS&);
	LPIAS& operator=(const LPIAS&);
	~LPIAS();

	string get_data();
	void set_data(string);

	void print();

	long solve(int);

private:
	string data;
};

#endif
