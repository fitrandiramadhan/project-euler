//file		:	Fibonacci.h
//author	:	steaKK

#ifndef Fibonacci_H
#define Fibonacci_H

#include <iostream>

using namespace std;

class Fibonacci {
public:
	Fibonacci();
	~Fibonacci();

	long get_data(int);
	void set_data(int,long);
	
	long sum_even(long);

	void print();

private:
	static const int DEFAULT_DATA_SIZE = 1000;

	int size;
	long* data;
};

#endif
