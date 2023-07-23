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
		long solve_parallel();
	
		bool islastprime(long);
	
	private :
		static const long DEFAULT_NTH = 100;
		static const long DEFAULT_DATA_SIZE = 2000000;
		
		long nth;
		long size;
		long* data;
};

#endif

