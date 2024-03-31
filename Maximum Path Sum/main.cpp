//file		:	main.cpp
//author	:	steaKK

#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> _v) {
	for(int i=0;i<_v.size();i++) cout << _v[i] << " ";
	cout << endl;
}

int main() {
	
	vector<int> v0;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	
	v0.push_back(75);
	
	v1.push_back(95);
	v1.push_back(64);

	v2.push_back(17);
	v2.push_back(47);
	v2.push_back(82);

	v3.push_back(18);
	v3.push_back(35);
	v3.push_back(87);
	v3.push_back(10);
	
	v4.push_back(20);
	v4.push_back(35);
	v4.push_back(04);
	v4.push_back(47);
	v4.push_back(65);
	
	print(v0);
	print(v1);
	print(v2);
	print(v3);
	print(v4);
	

	return 0;
}
