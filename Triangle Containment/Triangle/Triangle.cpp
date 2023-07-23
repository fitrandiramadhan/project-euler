//file		:	Triangle.cpp
//author	:	steaKK

#include "Triangle.h"

Triangle::Triangle() {
	Point p(0,0);
	a = p;
	b = p;
	c = p;
}

Triangle::Triangle(Point _a, Point _b, Point _c) {
	a = _a;
	b = _b;
	c = _c;
}

Triangle::Triangle(const Triangle& _Triangle) {
	a = _Triangle.a;
	b = _Triangle.b;
	c = _Triangle.c;
}

Triangle& Triangle::operator=(const Triangle& _Triangle) {
	a = _Triangle.a;
	b = _Triangle.b;
	c = _Triangle.c;
	return *this;
}

Triangle::~Triangle() {

}

Point Triangle::get_point(int index) {
	if(index = 2) return c;
	else if(index = 1) return b;
	else return a;
}

void Triangle::set_point(int index, Point _Point) {
	if(index = 2) c = _Point;
	else if(index = 1) b = _Point;
	else a = _Point;
}

void Triangle::print() {
	cout << "a = "; a.print();
	cout << "b = "; b.print();
	cout << "c = "; c.print();
}
