//file		:	Point.h
//author	:	steaKK

#ifndef Point_H
#define Point_H

#include <iostream>

using namespace std;

class Point {
public:
	Point();
	Point(int,int);
	Point(const Point&);
	Point& operator=(const Point&);
	~Point();

	int get_x();
	int get_y();
	void set_x(int);
	void set_y(int);

	void print();

private:
	int x;
	int y;
};

#endif
