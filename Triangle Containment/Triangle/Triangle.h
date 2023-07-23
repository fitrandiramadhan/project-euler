//file		:	Triangle.h
//author	:	steaKK

#ifndef Triangle_H
#define Triangle_H

#include <iostream>

#include "Point.h"

using namespace std;

class Triangle {
public:
	Triangle();
	Triangle(Point,Point,Point);
	Triangle(const Triangle&);
	Triangle& operator=(const Triangle&);
	~Triangle();

	Point get_point(int);
	void set_Point(int,Point);

	void print();

private:
	Point a;
	Point b;
	Point c;
};

#endif
