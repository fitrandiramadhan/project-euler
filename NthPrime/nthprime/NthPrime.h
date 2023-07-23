//file		:	NthPrime.h
//author	:	steaKK

#ifndef NthPrime_H
#define NthPrime_H

#include <iostream>
#include <vector>
#include <omp.h>

using namespace std;

class NthPrime {
	public :
		NthPrime();
		NthPrime(int);
		NthPrime(const NthPrime&);
		NthPrime& operator=(const NthPrime&);
		~NthPrime();
	
		long getnth();
		long getdata(long);
		void setnth(long);
		void setdata(long,long);
		
		long solve_sequential();
		long solve_sequential_bad();
		
		long solve_parallel();
		
		bool islastprime(long);
		bool isprime(long);
		
	private :
		static const long DEFAULT_NTH = 100;
		int nthreads;
		long nth;
		vector<long> data;
};

#endif

