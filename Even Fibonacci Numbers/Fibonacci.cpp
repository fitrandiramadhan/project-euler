//file		:	Fibonacci.cpp
//author	:	steaKK

#include "Fibonacci.h"

Fibonacci::Fibonacci() {
	data = new long[DEFAULT_DATA_SIZE];
	data[0] = 1;
	data[1] = 2;
	size = 2;
	for(int i=2;i<DEFAULT_DATA_SIZE;i++) data[i] = -1;
}

Fibonacci::~Fibonacci() {
	delete[] data;
}

long Fibonacci::get_data(int pos) {
	return data[pos];
}

void Fibonacci::set_data(int pos, long val) {
	data[pos] = val;
}

long Fibonacci::sum_even(long x) {
	long result = 0;
	long next = data[size-2] + data[size-1];;
	while(next<x) {
		if(next%2==0) {
			result += next;
			cout << "next = " << next << endl;
			cout << "result = " << result << endl;
		}
		data[size] = next;
		size++;
		next = data[size-2] + data[size-1];
	}
	return result+2;
}

void Fibonacci::print() {
	for(int i=0;i<size;i++) {
		cout << data[i] << " ";
	}
	cout << endl;
}
