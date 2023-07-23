//file		:	SumSquareDifference.cpp
//author	:	steaKK

#include "SumSquareDifference.h"

long SumSquareDifference::sumsquare(int x) {
	int result = x;
	for(int i=0;i<x;i++) result += (2*i + i*i);
	return result;
}

long SumSquareDifference::squaresum(int x) {
	int result = x;
	for(int i=0;i<x;i++) result += i;
	return result*result;
}

long SumSquareDifference::squarediff(int x) {
	return squaresum(x)-sumsquare(x);
}
