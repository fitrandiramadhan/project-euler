//file		:	BigInteger.hpp
//author	:	steaKK

#ifndef BigInteger_HPP
#define BigInteger_HPP

#include <iostream>
#include <vector>

using namespace std;

class BigInteger {

public:
  BigInteger();
  BigInteger(string _number);
  BigInteger(const BigInteger&);
  BigInteger& operator=(const BigInteger&);
  ~BigInteger();



private:
  vector<int> data;

};

#endif
