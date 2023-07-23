//file		:	XoRDecryption.h
//author	:	steaKK

#ifndef XoRDecryption_H
#define XoRDecryption_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class XoRDecryption {
public:
	//gangof5
	XoRDecryption();
	XoRDecryption(string);
	XoRDecryption(const XoRDecryption&);
	XoRDecryption& operator=(const XoRDecryption&);
	~XoRDecryption();

	//gettersetter
	int get_size();
	int get_plaintext(int);
	int get_ciphertext(int);
	void set_size(int);
	void set_plaintext(int,int);
	void set_ciphertext(int,int);

	//tester
	void print();

	//method
	void decrypt();

private:
	//constant
	static const int DEFAULT_TEXT_SIZE = 2000;

	//attribute
	int size;
	int* plaintext;
	int* ciphertext;
};

#endif
