//file		:	TPH.cpp
//author	:	steaKK


#include "TPH.hpp"

int TPH::triangular(int x) {
	return x*(x+1)/2;
}

int TPH::pentagonal(int x) {
	int result = x*((3*x)-1)/2;
	return result;
}

int TPH::hexagonal(int x) {
	return x*(2*x−1);
}

int TPH::solve(int n) {
	int i=2;
	int count = 1;
	vector<int> v;
	v.push_back(triangular(i));
	v.push_back(pentagonal(i));
	v.push_back(hexagonal(i));
	while(count<n) {
		int temp = min(v);
		v[temp] = run(temp,v[temp]);
		if(all_same(v)) count++;
	}
	return v[0];
}

int TPH::min(vector<int> v) {
	float temp = std::numeric_limits<T>::infinity();
	int result = 0;
	for(int i=0;i<v.size();i++) {
		if(v[i]<temp) result = i;
	}
	return result;
}

int TPH::run(int r, int x) {
	if(r==0) return triangular(x);
	else if(r==1) return pentagonal(x);
	else return hexagonal(x);
}

bool TPH::all_same(vector<int> v) {
	if(v[0]==v[1] && v[1]==v[2]) return true;
	else return false;
}
