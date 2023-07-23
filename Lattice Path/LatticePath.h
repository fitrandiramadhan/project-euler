//file		:	LatticePath.h
//author	:	steaKK

#ifndef LatticePath_H
#define LatticePath_H

#include <iostream>
#include <vector>

using namespace std;

class LatticePath {
public:
	LatticePath();
	LatticePath(int,int);
	LatticePath(const LatticePath&);
	LatticePath& operator=(const LatticePath&);
	~LatticePath();

  static int DEFAULT_LATTICE_HEIGHT = 20;
  static int DEFAULT_LATTICE_WIDTH = 20;

private:
	vector<vector<int> > data;
};

#endif
