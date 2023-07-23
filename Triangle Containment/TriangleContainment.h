//file		:	TriangleContainment.h
//author	:	steaKK

#ifndef TriangleContainment_H
#define TriangleContainment_H

#include <iostream>

#include "Triangle.h"

using namespace std;

class TriangleContainment {
public:
	TriangleContainment();
	TriangleContainment(vector<Triangle>);
	TriangleContainment(const TriangleContainment&);
	TriangleContainment& operator=(const TriangleContainment&);
	~TriangleContainment();

	Triangle get_data(int);
	void set_data(int,Triangle);
	void add_triangle(Triangle);

	void print();

	float get_gradient(Point,Point);

private:
	vector<Triangle> data;
};

#endif
