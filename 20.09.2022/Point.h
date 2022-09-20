#pragma once
#include <iostream>

using namespace std;
class Point
{
	int x;
	int y;
public:
	Point();
	Point(int _x, int _y);

	void SetX(int _x);
	void SetY(int _y);

	int GetX()const;
	int GetY()const;

	operator int();
	operator double();

	template<typename T>
	Point operator+(const T a);

	template<typename T>
	Point operator-(const T a);

	template<typename T>
	Point& operator+=(const T a);

	template<typename T>
	Point& operator-=(const T a);

	template<typename T>
	Point operator*(const T a);

	template<typename T>
	Point operator/(const T a);

	template<typename T>
	Point& operator*=(const T a);

	template<typename T>
	Point& operator/=(const T a);

	Point& operator++();

	Point& operator--();

	Point operator++(int);

	Point operator--(int);

	template <typename T>
	Point& operator=(const T a);
};
template<typename T>
Point Point::operator+(const T a) {
	Point obj = *this;
	obj.x += (int)a;
	obj.y += (int)a;
	return obj;
}
template<typename T>
Point Point::operator-(const T a) {
	Point obj = *this;
	obj.x -= (int)a;
	obj.y -= (int)a;
	return obj;
}

template<typename T>
Point& Point:: operator+=(const T a) {
	x += (int)a;
	y += (int)a;
	return *this;
}
template<typename T>
Point&Point:: operator-=(const T a) {
	x -= (int)a;
	y -= (int)a;
	return *this;
}
template<typename T>
Point Point::operator*(const T a) {
	Point obj = *this;
	obj.x *= (int)a;
	obj.y *= (int)a;
	return obj;
}
template<typename T>
Point Point::operator/(const T a) {
	Point obj = *this;
	obj.x /= (int)a;
	obj.y /= (int)a;
	return obj;
}
template<typename T>
Point& Point::operator*=(const T a) {
	x *= (int)a;
	y *= (int)a;
	return *this;
}
template<typename T>
Point& Point::operator/=(const T a) {
	x /= (int)a;
	y /= (int)a;
	return *this;
}
template <typename T>
Point& Point::operator=(const T a) {
	x = a;
	y = a;
	return *this;
}

istream& operator>> (istream& is, Point& obj);

ostream& operator<< (ostream& os, const Point& obj);