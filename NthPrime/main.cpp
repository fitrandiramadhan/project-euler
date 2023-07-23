//file		:	main.cpp
//author	:	steaKK

#include "NthPrime.h"
#include <ctime>

int main() {
	NthPrime n0(10001);
	NthPrime n1(10001);

	// time_t t0 = time(NULL);
	// cout << "(sequential)     prime ke-" << n0.getnth() << " = " << n0.solve_sequential() << endl;
	// for(int i=0;i<n1.getnth();i++) {
		// cout << n0.getdata(i) << " ";
	// }
	// cout << endl;
	// time_t t1 = time(NULL);
	// cout << "selesai dalam " << difftime(t1,t0) << " detik" << endl;
	cout << "(parallel)       prime ke-" << n1.getnth() << " = " << n1.solve_parallel() << endl;
	// for(int i=0;i<n1.getnth();i++) {
		// cout << n1.getdata(i) << " ";
	// }
	// cout << endl;
	// time_t t2 = time(NULL);
	// cout << "selesai dalam " << difftime(t2,t1) << " detik" << endl;

	return 0;
}
