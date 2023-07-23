//file		:	PowerDigitSum.cpp
//author	:	steaKK

#include "PowerDigitSum.hpp"

string PowerDigitSum::solve() {
	BigInt::Rossi result("1", BigInt::DEC_DIGIT);
	BigInt::Rossi temp("2", BigInt::DEC_DIGIT);
	for(int i=0;i<10;i++) result = result*temp;
	result.toStrDec();
}
