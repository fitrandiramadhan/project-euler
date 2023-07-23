//file		:	main.cpp
//author	:	steaKK

#include "SmallestMultiple.h"

int main() {
	long a = 1;
	long b = 1000000000;

	cout << "Smallest Multiple from " << a << " to " << b << " = " << SmallestMultiple::solve(a,b) << endl;

	return 0;
}
