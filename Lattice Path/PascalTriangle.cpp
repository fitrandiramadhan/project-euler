//file		:	PascalTriangle.h
//author	:	steaKK

#include <iostream>
#include <vector>

using namespace std;

vector<vector<unsigned long long int>> makeTriangle(int _depth) {
  // cout << "aloha0" << endl;
  vector<vector<unsigned long long int>> result;
  for(int i=0;i<_depth;i++) {
    // cout << "aloha1" << endl;
    // cout << i << endl;
    vector<unsigned long long int> v;
    // cout << "aloha11" << endl;
    for(int j=0;j<i;j++) {
      // cout << "aloha2" << endl;
      // cout << j << endl;
      if(j==0) {
        // cout << "aloha21" << endl;
        v.push_back(1);
      }
      else if(j==i-1) {
        // cout << "aloha22" << endl;
        v.push_back(1);
      }
      else v.push_back(result[i-1][j-1]+result[i-1][j]);
    }
    // for(int j=0;j<v.size();j++) cout << v[j] << " ";
    // cout << endl;
    result.push_back(v);
  }
  return result;
}

void print(vector<vector<unsigned long long int>> triangle) {
  for(int i=0;i<triangle.size();i++) {
    cout << "(" << i << ") ";
    for(int j=0;j<triangle[i].size();j++) {
      cout << triangle[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  // cout << "aloha" << endl;
  int i = 42;
  vector<vector<unsigned long long int>> v = makeTriangle(i);
  print(v);
  cout << v[v.size()-1].size() << endl;
  cout << v[v.size()-1][v.size()/2] << endl;


  // makeTriangle(4);

  return 0;
}
