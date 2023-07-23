//file		:	LPIAS.cpp
//author	:	steaKK

#include "LPIAS.h"

LPIAS::LPIAS() {
	data = "";
}

LPIAS::LPIAS(string filename) {
	ifstream myfile;
	myfile.open(filename.c_str());
	data = "";
	myfile >> data;

	// cout << s << endl;;
	myfile.close();
}

LPIAS::LPIAS(const LPIAS& _LPIAS) {
	data = _LPIAS.data;
}

LPIAS& LPIAS::operator=(const LPIAS& _LPIAS) {
	data = _LPIAS.data;
	return *this;
}

LPIAS::~LPIAS() {

}

string LPIAS::get_data() {
	return data;
}

void LPIAS::set_data(string _data) {
	data = _data;
}

void LPIAS::print() {
	cout << "size = " << data.size() << endl;
	cout << data << endl;
}

long LPIAS::solve(int chunk) {
	long result = 0;
	for(int i=0;i<data.size()-chunk;i++) {
		long temp = (data.at(i)-48);
		// cout << "[" << data.at(i)-48 << "]";
		for(int j=i+1;j<i+chunk;j++) {
			// cout << "[" << data.at(j)-48 << "]";
			// cout << temp;
			temp = temp*(data.at(j)-48);
		}
		// cout << " = " << temp << endl;
		if(result<temp) result = temp;
	}
	return result;
}
