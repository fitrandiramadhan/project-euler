//file		:	TriangleContainment.cpp
//author	:	steaKK

#include "TriangleContainment.h"

TriangleContainment::TriangleContainment() {

}

TriangleContainment::TriangleContainment(vector<Triangle> _data) {
	data = _data;
}

TriangleContainment::TriangleContainment(const TriangleContainment& _TriangleContainment) {
	data = TriangleContainment.data;
}

TriangleContainment& TriangleContainment::operator=(const TriangleContainment& _TriangleContainment) {
	data = TriangleContainment.data;
	return *this;
}

TriangleContainment::~TriangleContainment() {

}

Triangle TriangleContainment::get_data(int pos) {
	return data[pos];
}

void TriangleContainment::set_data(int pos, Triangle _Triangle) {
	data[pos] = _Triangle;
}

void TriangleContainment::add_triangle(Triangle _Triangle) {
	data.push_back(_Triangle);
}

void TriangleContainment::print() {
	for(int i=0;i<data.size();i++) {
		data[i].print();
	}
}

float Triangle::get_gradient(Point p1, Point p2) {
	return ((float)p2.get_y()-(float)p1.get_y())/((float)p2.get_x()-(float)p1.get_x());
}
