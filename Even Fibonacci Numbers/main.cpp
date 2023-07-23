//file		:	main.cpp
//author	:	steaKK

#include "Fibonacci.h"

int main() {
	Fibonacci F;
	// F.init(4000000);
	cout << F.sum_even(4000000) << endl;
	F.print();

	return 0;
}
