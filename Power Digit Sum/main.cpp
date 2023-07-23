//file		:	main.cpp
//author	:	steaKK

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int max(int x, int y) {
  return (x > y) ? x : y;
}

string multiplyCasual (string x, string y){
  return(to_string(stoi(x)*stoi(y)));
}

string addLeadingZero(string s, int size) {
  string result = s;
  for(int i=s.size();i<size;i++) result.insert(0,1,'0');
  return result;
}

string removeLeadingZero(string s) {
  string result = s;
  while(result[0]=='0' && result.size()>0) result.erase(0,1);
  return result;
}

string multiplyWithChar(string _x, char _c) {
  string x = addLeadingZero(_x, _x.size()+1);
  string result;
  int carry = 0;
  // cout << "multiplyWithChar" << endl;
  // cout << "input " << x << " x " << _c << endl;
  for(int i=0;i<x.size();i++) {
    // cout << "---------------------------------------------" << endl;
    // cout << "entering for loop with i = " << i << endl;
    int sum = (carry + ((x[x.size()-i-1]-48)*(_c-48)));
    // cout << "with carry  " << carry << endl;
    // cout << "multiplying " << "( " << (x[x.size()-i-1]-48) << " x " << _c << " ) + " << carry << " = " << sum << endl;
    // cout << "inserting   " << sum%10 << endl;
    result.insert(0,1,sum%10+48);
    // cout << "resulting   " << result << endl;
    carry = sum/10;
    // cout << "carry became " << carry << endl;
    // cout << "---------------------------------------------" << endl;
  }
  return removeLeadingZero(result);
}



string add(string x, string y) {
  string result = addLeadingZero("",max(x.size(),y.size())+1);
  string a = addLeadingZero(x,max(x.size(),y.size())+1);
  // cout << a << endl;
  string b = addLeadingZero(y,max(x.size(),y.size())+1);
  // cout << b << endl;
  int sum = 0;
  for(int i=0;i<result.size();i++) {
    // cout << sum << endl;
    sum = (int(a[result.size()-i-1])-48) + (int(b[result.size()-i-1])-48) + sum;
    result[result.size()-i-1] = sum%10+48;
    sum /= 10;
  }
  result = removeLeadingZero(result);
  // cout << result << endl;
  return result;
}

string multiplyNaive (string _x, string _y) {
  int n = max(_x.size(),_y.size());
  string x = addLeadingZero(_x,n);
  string y = addLeadingZero(_y,n);
  string result;
  //
  // cout << "starting multiplyNaive" << endl;
  // cout << x << " x " << y << endl;
  // cout << "current result " << result << endl;

  for(int i=0;i<n;i++) {
    // cout << "---------------------------------------------" << endl;
    // cout << "entering for loop with i = " << i << endl;
    // cout << "multiplying " << "( " << x << " x " << y[y.size()-i-1] << " )" << endl;
    // cout << "inserting   " << sum%10 << endl;
    string sum = multiplyWithChar(x,y[y.size()-i-1]);
    // cout << "= " << sum << endl;
    for(int j=0;j<i;j++) sum.push_back('0');
    // cout << "after added with 10 power" << endl;
    // cout << "= " << sum << endl;
    // cout << "adding sum + result" << endl;
    // cout << "= " << sum << " + " << result << endl;
    result = add(result,sum);
    // cout << "= " << result << endl;
  }
  return result;
}

string subtract2 (string a, string b) {
  string s1 = a;
  string s2 = b;
  for(int i=s2.size();i<s1.size();i++) s2.insert(0,1,'0');
  for(int i=0;i<s1.size();i++) {
    if(s1[s1.size()-i-1]<s2[s1.size()-i-1]) {
      s1[s1.size()-i-2]--;
      s1[s1.size()-i-1] += 10;
    }
    s1[s1.size()-i-1] = 48 + s1[s1.size()-i-1] - s2[s2.size()-i-1];
  }

  return removeLeadingZero(s1);
}


string multiplyKaratsuba(string x, string y) {
  string result;

  string s1 = addLeadingZero(x,max(x.size(),y.size()));
  string s2 = addLeadingZero(y,max(x.size(),y.size()));
  // cout << "checking add zero s1 = " << max(x.size(),y.size())-x.size() << endl;
  // cout << "checking add zero s2 = " << max(x.size(),y.size())-y.size() << endl;
  //
  // cout << "s1 = " << s1 << endl;
  // cout << "s2 = " << s2 << endl;


  if(s1.size()<2 || s2.size()<2) {
    // cout << endl << "terminate condition of " << s1 << " x " << s2 << " = " << multiplyCasual(s1,s2) << endl;
    return multiplyNaive(s1,s2);
  }
  else {
    int n = max(s1.size(),s2.size());
    int half = n/2;
    // cout << "this is an ELSE cycle with half = " << half << endl;
    string a = s1.substr(0,s1.size()/2+s1.size()%2);
    string b = s1.string::substr(s1.size()/2+s1.size()%2,s1.size()/2);
    string c = s2.substr(0,s2.size()/2+s2.size()%2);
    string d = s2.string::substr(s2.size()/2+s2.size()%2,s2.size()/2);
    // cout << "a = " << a << "; b = " << b << "; c = " << c << "; d = " << d << endl;
    // cout << endl << "entering karatsuba of " << x << " x " << y << endl;
    // cout << "a = " << a << "; b = " << b << "; c = " << c << "; d = " << d << endl;

    // cout << endl << "resolving ac" << endl;
    string ac = multiplyKaratsuba(a,c);
    // cout << "ac = " << ac << endl;

    // cout << endl << "resolving bd" << endl;
    string bd = multiplyKaratsuba(b,d);
    // cout << "bd = " << bd << endl;
    // cout << endl << "resolving (ad+bc)" << endl;
    string ad_plus_bc = subtract2(multiplyKaratsuba(add(a,b),add(c,d)),add(ac,bd));
    // cout << "= ad+bc" << endl;
    // cout << "= (a+b) x (c+d) - (ac + bd)" << endl;
    // cout << "= ((" << a << " + " << b << ")" << " x " << "(" << c << " + " << d << ")) - (" << ac << " + " << bd << ")" << endl;
    // cout << "= (" << add(a,b) << " x " << add(c,d) << ") - (" << ac << " + " << bd << ")" << endl;
    // cout << "= " << multiplyKaratsuba(add(a,b),add(c,d)) << " - " << add(ac,bd) << endl;
    // cout << "= " << ad_plus_bc << endl;

    // cout << "before adding 0 ac, n= " << n << endl;
    // cout << "before adding 0 ad+bc, half= " << half << endl;
    // for(int i=0;i<n;i++) ac.push_back('0');
    // for(int i=0;i<half;i++) ad_plus_bc.push_back('0');

    for(int i=0;i<half;i++) {
      ac.push_back('0'); ac.push_back('0');
      ad_plus_bc.push_back('0');
    }
    // cout << "resolving start" << endl;
    // cout << ac << " + " << bd << " + " << ad_plus_bc << " = " << removeLeadingZero(add(add(ac,bd),ad_plus_bc)) << endl;
    // cout << "resolving end" << endl;
    return removeLeadingZero(add(add(ac,bd),ad_plus_bc));
  }
  return result;
}

string multiplyAllVector(vector<string> v) {
  // cout << "entering multiplyAllVector" << endl;
  // cout << "[ ";
  // for(int i=0;i<v.size();i++) cout << v[i] << " ";
  // cout << "]" << endl;
  // cout << endl;
  if(v.size()==1) return v[0];
  else {
    vector<string> v0 = v;
    if(v0.size()%2>0) v0.push_back("1");
    // cout << "here are the v0 " << "[ ";
    // for(int i=0;i<v0.size();i++) cout << v0[i] << " ";
    // cout << "]" << endl;
    vector<string> v1, v2;
    // cout << v0.size() << endl;
    for(int i=0;i<v0.size()/2;i++) {
      v1.push_back(v0[i]); v2.push_back(v0[v0.size()/2+i]);
      // cout << "here are the v1 " << "[ ";
      // for(int i=0;i<v1.size();i++) cout << v1[i] << " ";
      // cout << "]" << endl;
      // cout << "here are the v2 " << "[ ";
      // for(int i=0;i<v2.size();i++) cout << v2[i] << " ";
      // cout << "]" << endl;
    }
    // cout << multiplyAllVector(v1) << " x " << multiplyAllVector(v2) << endl;
    return multiplyKaratsuba(multiplyAllVector(v1),multiplyAllVector(v2));
  }
}


int main() {
  vector<string> v;
  string base = "2";
  int exponent = 1000;

  for(int i=0;i<exponent;i++) v.push_back(base);
  string result = multiplyAllVector(v);
  cout << result << endl;

  int sum=0;
  for(int i=0;i<result.size();i++) sum+= (result[i]-48);
  cout << sum << endl;

	return 0;
}
