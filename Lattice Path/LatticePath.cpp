//file		:	BigInteger.cpp
//author	:	steaKK

#include "BigInteger.hpp"

BigInteger::BigInteger() {

}

BigInteger::BigInteger(string _number) {
  for(int i=0;i<_number.size();i++) v.push_back(_number[number.size()-(1+i)])
}

BigInteger::BigInteger(const BigInteger& _BigInteger) {
  data = _BigInteger.data;
}

BigInteger& BigInteger::operator=(const BigInteger& _BigInteger) {
  data = _BigInteger.data;
  return *this;
}

BigInteger::~BigInteger() {

}

int& BigInteger::operator[](int index) {
  if(index>=data.size()) {
    cout << "Array index out of bound, exiting";
    exit(0);
  }
  else return data[index];
}



BigInteger BigInteger::multiply(const BigInteger& _BigIntegerA, const BigInteger& _BigIntegerB) {
  BigInteger result;
  for(int i=0;i<_BigIntegerA.size()+_BigIntegerB.size();i++) result.push_back(0);

  
}
