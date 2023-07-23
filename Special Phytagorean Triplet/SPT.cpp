//file		:	SPT.cpp
//author	:	steaKK

#include "SPT.h"

long SPT::solve(long x) {
	for(long i=0;i<x;i++) {
		for(long j=i+1;j<x;j++) {
			for(long k=j+1;k<x;k++) {
				if((k*k)==(i*i)+(j*j) && i+j+k==x) return i*j*k;
			}
		}
	}
	return -1;
}
