#include "Point.h"
Point::Point() {
	x = 0;
	y = 0;
}

Point::Point(int _x, int _y) {
	x = _x;
	y = _y;
}

Point& Point::operator++() {
	++x;
	++y;
	return *this;
}

Point& Point::operator--() {
	--x;
	--y;
	return *this;
}

Point Point::operator++(int) {
	Point obj = *this;
	++x;
	++y;
	return obj;
}

Point Point::operator--(int) {
	Point obj = *this;
	--x;
	--y;
	return obj;
}

void Point::SetX(int _x) {
	x = _x;
}

void Point::SetY(int _y) {
	y = _y;
}

int Point::GetX()const {
	return x;
}

int Point::GetY()const {
	return y;
}

Point::operator int() {
	return x + y;
}

Point::operator double() {
	return (double)x + y;
}

istream& operator>>(istream& is, Point& obj) {
	cout << "Enter x\n";
	int _var;
	is >> _var;
	obj.SetX(_var);
	cout << "Enter y\n";
	is >> _var;
	obj.SetY(_var);
	return is;
}

ostream& operator<<(ostream& os, const Point& obj) {
	os << "(" << obj.GetX() << ";" <<obj.GetY() <<")";
	return os;
}