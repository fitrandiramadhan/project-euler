//file		:	DigitCancelingFraction.h
//author	:	steaKK

#ifndef DigitCancelingFraction_H
#define DigitCancelingFraction_H

#include <iostream>
#include <string>

using namespace std;

class DigitCancelingFraction {
public:
	//gangof5
	DigitCancelingFraction();
	DigitCancelingFraction(int,int);
	DigitCancelingFraction(const DigitCancelingFraction&);
	DigitCancelingFraction& operator=(const DigitCancelingFraction&);
	~DigitCancelingFraction();

	//gettersetter
	int get_nominator();
	int get_denominator();
	void set_nominator(int);
	void set_denominator(int);

	//tester
	void print();

	//operator overloading
	bool operator==(const DigitCancelingFraction&);

	//method
	DigitCancelingFraction remove_digit(int);
	bool contains(int);
	DigitCancelingFraction get_lowestpair();

private:
	//constant
	static const int MAX_N = 100;

	//attribute
	int nominator;
	int denominator;
};

#endif
