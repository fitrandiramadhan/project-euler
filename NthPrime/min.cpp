#include <iostream>
#include <omp.h>

using namespace std;

int main() {
	
	int tab[10] = {3,5,3,2,6,7,8,3,2,5};
	
	int result = 10;
	
	omp_set_num_threads(8);
	#pragma omp parallel for
	for(int i=0;i<10;i++) {
		cout << "iterasi ke-" << i << endl;
		if(result>tab[i]) {
			result = tab[i];
		}
	}

	cout << result;
	
	return 0;
}


