//file		:	Point.cpp
//author	:	steaKK

#include "Point.h"

Point::Point() {
	x = 0;
	y = 0;
}

Point::Point(int _x, int _y) {
	x = _x;
	y = _y;
}

Point::Point(const Point& _Point) {
	x = _Point.x;
	y = _Point.y;
}

Point& Point::operator=(const Point& _Point) {
	x = _Point.x;
	y = _Point.y;
	return *this;
}

Point::~Point() {

}

int Point::get_x() {
	return x;
}

int Point::get_y() {
	return y;
}

void Point::set_x(int _x) {
	x = _x;
}

void Point::set_y(int _y) {
	y = _y;
}

void Point::print() {
	cout << "[" << x << "," << y << "]" << endl;
}
