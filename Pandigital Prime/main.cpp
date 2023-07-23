//file		:	main.h
//author	:	steaKK

#include <fstream>
#include "PanDigitalPrime.h"

using namespace std;

int main() {
	long x = PanDigitalPrime::highest_pandigitalprime();
	// cout << omp_get_num_procs() << endl;
	// cout << PanDigitalPrime::is_prime(987654103) << endl;

	ofstream myfile;
	myfile.open("file.out");
	myfile << x << endl;
	myfile.close();

	return 0;
}
