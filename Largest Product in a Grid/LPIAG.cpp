//file		:	LPIAG.cpp
//author	:	steaKK

#include "LPIAG.h"

LPIAG::LPIAG() {
	ifstream file("test.txt", std::fstream::in);
	for(int i=0;i<20;i++) {
		vector<int> v;
		for(int j=0;j<20;j++) {
			string s = "";
			file >> s;
			v.push_back(stoi(s));
		}
		data.push_back(v);
	}
}

LPIAG::LPIAG(string filename) {

}

LPIAG::LPIAG(const LPIAG& _LPIAG) {
	data = _LPIAG.data;
}

LPIAG& LPIAG::operator=(const LPIAG& _LPIAG) {
	data = _LPIAG.data;
	return *this;
}

LPIAG::~LPIAG() {

}

int LPIAG::get_data(int i, int j) {
	return data[i][j];
}

void LPIAG::set_data(int i, int j, int val) {
	data[i][j] = val;
}

void LPIAG::print() {
	for(int i=0;i<data.size();i++) {
		for(int j=0;j<data[i].size();j++) {
			cout << "[" << data[i][j] << "] ";
		}
		cout << endl;
	}
}

int LPIAG::sum_vertical(int x, int y) {
	cout << "aloha ver   " << x << "," << y << "  ---  ";
	int result = 0;
	for(int i=x;(i<x+4 && i<data.size());i++) {
		cout << " +" << data[i][y];
		result+=data[i][y];
	}
	cout << " = " << result << endl;
	return result;
}

int LPIAG::sum_horizontal(int x, int y) {
	cout << "aloha ver   " << x << "," << y << "  ---  ";
	int result = 0;
	for(int j=y;j<y+4 && j<data[x].size();j++) {
		cout << " +" << data[x][j];
		result+=data[x][j];
	}
	cout << " = " << result << endl;
	return result;
}

int LPIAG::sum_diagonal1(int x, int y) {
	cout << "aloha diag1 " << x << "," << y << "  ---  ";
	int result = 0;
	int i = x;
	int j = y;
	do {
		cout << " +" << data[i][j];
		result += data[i][j];
		i++; j++;
	} while(i<x+4 && i<data.size() && j<y+4 && j<data[0].size());
	cout << " = " << result << endl;
	return result;
}

int LPIAG::sum_diagonal2(int x, int y) {
	cout << "aloha diag2 " << x << "," << y << "  ---  ";
	int result = 0;
	int i = x;
	int j = y;
	do {
		cout << " +" << data[i][j];
		result += data[i][j];
		i--; j++;
	} while(i>x-4 && i<data.size() && j<y+4 && j<data[0].size() && i>=0);
	cout << " = " << result << endl;
	return result;
}

int LPIAG::max2(int a, int b) {
	if(b>a) return b;
	else return a;
}

int LPIAG::max3(int a, int b, int c) {
	return max2(max2(a,b),c);
}

int LPIAG::solve() {
	int result = 0;
	for(int i=0;i<data.size();i++) {
		for(int j=0;j<data[i].size();j++) {
			// cout << "i,j = " << i << "," << j << endl;
			int temp = max2(max2(sum_vertical(i,j),sum_horizontal(i,j)),max2(sum_diagonal1(i,j),sum_diagonal2(i,j)));
			if(result<temp) {
				// cout << temp << endl;
				result = temp;
			}
		}
	}
	return result;
}
