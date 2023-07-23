//file		:	main.cpp
//author	:	steaKK

#include "NthPrime.h"

int main() {
	NthPrime n(100);
	cout << "(sequential)     prime ke-" << n.getnth() << " = " << n.solve_sequential() << endl;
	cout << "(sequential_bad) prime ke-" << n.getnth() << " = " << n.solve_sequential_bad() << endl;
	cout << "(parallel)       prime ke-" << n.getnth() << " = " << n.solve_parallel() << endl;
	
	return 0;
}

