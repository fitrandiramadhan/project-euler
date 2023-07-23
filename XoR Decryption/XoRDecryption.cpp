//file		:	XoRDecryption.cpp
//author	:	steaKK

#include "XoRDecryption.h"

XoRDecryption::XoRDecryption() {
	size = DEFAULT_TEXT_SIZE;
	plaintext = new int[size];
	for(int i=0;i<size;i++) {
		plaintext[i] = -1;
	}
	ciphertext = new int[size];
	for(int i=0;i<size;i++) {
		ciphertext[i] = -1;
	}
}

XoRDecryption::XoRDecryption(string _string) {
	ifstream myfile;
	myfile.open("cipher_test.txt");
	string s = "";
	myfile >> s;

	cout << s << endl;;
	myfile.close();
}

XoRDecryption::XoRDecryption(const XoRDecryption& _XoRDecryption) {
	size = _XoRDecryption.size;
	plaintext = new int[size];
	for(int i=0;i<size;i++) {
		plaintext[i] = _XoRDecryption.plaintext[i];
	}
	ciphertext = new int[size];
	for(int i=0;i<size;i++) {
		ciphertext[i] = _XoRDecryption.ciphertext[i];
	}
}

XoRDecryption& XoRDecryption::operator=(const XoRDecryption& _XoRDecryption) {
	size = _XoRDecryption.size;
	for(int i=0;i<size;i++) {
		plaintext[i] = _XoRDecryption.plaintext[i];
	}
	for(int i=0;i<size;i++) {
		ciphertext[i] = _XoRDecryption.ciphertext[i];
	}
	return *this;
}

XoRDecryption::~XoRDecryption() {
	delete[] plaintext;
	delete[] ciphertext;
}

int XoRDecryption::get_size() {
	return size;
}

int XoRDecryption::get_plaintext(int pos) {
	return plaintext[pos];
}

int XoRDecryption::get_ciphertext(int pos) {
	return ciphertext[pos];
}

void XoRDecryption::set_size(int _size) {
	size = _size;
}

void XoRDecryption::set_plaintext(int pos, int val) {
	plaintext[pos] = val;
}

void XoRDecryption::set_ciphertext(int pos, int val) {
	ciphertext[pos] = val;
}

void XoRDecryption::print() {
	cout << "size = " << size << endl;
	for(int i=0;i<size;i++) {
		cout << "[" << plaintext[i] << "] ";
	}
	cout << endl;
	for(int i=0;i<size;i++) {
		cout << "[" << ciphertext[i] << "] ";
	}
	cout << endl;
}

void XoRDecryption::decrypt() {
	// for(int i=0;i<size;i++) {
	// 	plaintext[i] =
	// }
}
