//file		:	LargeSum.cpp
//author	:	steaKK

#include "LargeSum.h"

LargeSum::LargeSum() {

}

LargeSum::LargeSum(string filename) {
	ifstream file;
	file.open(filename);
	string s = "";
	while(!file.eof()) {
		file >> s;
		vector<int> temp;
		for(int i=0;i<s.size();i++) temp.push_back(atoi(s.at(s.length()-(1+i))));
		data.push_back(temp);
	}
	file.close();
}

LargeSum::LargeSum(const LargeSum& _LargeSum) {
	data = _LargeSum.data;
}

LargeSum& LargeSum::operator=(const LargeSum& _LargeSum) {
	data = _LargeSum.data;
	return *this;
}

LargeSum::~LargeSum() {

}

// long LargeSum::solve() {
// 	for(int i=0;i<data.size())
// }
