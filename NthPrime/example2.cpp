#include <iostream>
#include <stdlib.h>
#include <cstdio>
#include <time.h>
#include <math.h>
#include <omp.h>
#include <sys/time.h>

using namespace std;

int nthreads = omp_get_num_procs();;
struct timeval tv;
struct timezone tz;

/*
 * fungsi menentukan bilangan prima serial
 * 
 * */
void prime(int prima[], int in){
	int x, bil;
	x=0;
	for (int a = 1; a <= in; a++)
	{
	bil = 0;
		for (int b = 1; b <= a; b++)
		{
			if (a%b == 0)
			{
				bil++;
			}
		}
		if (bil == 2){
			prima[x] = a;
			x++;
		}
	}
	cout<<endl;	
}

int primeParallel(int prima[], int in){
	int x, bil;
	x=0;
	for (int a = 1; a <= in; a++) {
	bil = 0;
	omp_set_num_threads(nthreads);
	#pragma omp parallel for
		for (int b = 1; b <= a; b++)
		{
			if (a%b == 0)
			{
				bil++;
			}
		}
		if (bil == 2){
			prima[x] = a;
			x++;
		}
	}
	return prima[x];
}

int main(){
	clock_t before, after;
	float time_serial;
	int n;
	double time_start, time_end;
	int hitung[8] = {1600,3200,6400,10000,20000,40000,80000,160000};
	for(int count=0;count<8;count++){
		// printf(" ========================================== \n");
		// printf(" Bilangan Prima sampai angka %d \n ",hitung[count]);
		for(int loop=0;loop<7;loop++){
			n = hitung[count];
			int prima[n];
			gettimeofday(&tv, &tz);
			time_start = (double)tv.tv_sec + (double)tv.tv_usec / 1000000.0;
			//prime(prima,n);
			primeParallel(prima,n);
			gettimeofday(&tv, &tz);
			time_end = (double)tv.tv_sec + (double)tv.tv_usec / 1000000.0;
			// printf("[%d] ",	loop+1);
			// printf(" Pencarian Bilangan Prima %d = %lf seconds\n", n, (time_end - time_start));
		}
	}
	return 0;
}
