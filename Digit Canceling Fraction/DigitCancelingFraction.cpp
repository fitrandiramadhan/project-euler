//file		:	DigitCancelingFraction.cpp
//author	:	steaKK

#include "DigitCancelingFraction.h"

DigitCancelingFraction::DigitCancelingFraction() {
	nominator = 1;
	denominator = 1;
}

DigitCancelingFraction::DigitCancelingFraction(int _nominator, int _denominator) {
	nominator = _nominator;
	denominator = _denominator;
}

DigitCancelingFraction::DigitCancelingFraction(const DigitCancelingFraction& _DigitCancelingFraction) {
	nominator = _DigitCancelingFraction.nominator;
	denominator = _DigitCancelingFraction.denominator;
}

DigitCancelingFraction& DigitCancelingFraction::operator=(const DigitCancelingFraction& _DigitCancelingFraction) {
	nominator = _DigitCancelingFraction.nominator;
	denominator = _DigitCancelingFraction.denominator;
}

DigitCancelingFraction::~DigitCancelingFraction() {

}

int DigitCancelingFraction::get_nominator() {
	return nominator;
}

int DigitCancelingFraction::get_denominator() {
	return denominator;
}

void DigitCancelingFraction::set_nominator(int _nominator) {
	nominator = _nominator;
}

void DigitCancelingFraction::set_denominator(int _denominator) {
	denominator = _denominator;
}

void DigitCancelingFraction::print() {
	cout << nominator << "/" << denominator << endl;
}

bool DigitCancelingFraction::operator==(const DigitCancelingFraction& _DigitCancelingFraction) {
	float a = (float)(nominator/denominator);
	float b = (float)(DigitCancelingFraction.nominator/_DigitCancelingFraction.denominator);
	if(a==b) return true;
	else return false;
}

bool DigitCancelingFraction::contains(int x) {
	string _nominator = to_string(nominator);
	string _denominator = to_string(denominator);
	int count_nominator = 0;
	int count_denominator = 0;
	for(int i=0;i<_nominator.size();i++) {
		if(_nominator.at(i)-48==x) count_nominator++;
		if(_denominator.at(i)-48==x) count_denominator++;
	}
	if(count_nominator>0 && count_denominator>0) return true;
	else return false;
}

DigitCancelingFraction DigitCancelingFraction::remove_digit(int x) {
	string _nominator = to_string(nominator);
	string _denominator = to_string(denominator);
	string nominator_ = "";
	string denominator_ = "";
	for(int i=0;i<nominator_.size();i++) {
		if(!_nominator.at(i)-48==x) nominator_+=_nominator.at(i);
		if(!_denominator.at(i)-48==x) denominator_+=_denominator.at(i);
	}
	DigitCancelingFraction result(stoi(nominator_),stoi(denominator_));
	return result;
}

DigitCancelingFraction DigitCancelingFraction::get_lowestpair() {
	for(int i=1;i<MAX_N;i++) {
		for(int j=1;j<MAX_N;j++) {
			DigitCancelingFraction()
		}
	}
}
