#pragma once
#include<iostream>
#include <ctime>
using namespace std;

template<class T>
class Matrix
{
	T ** mas;
	int str;
	int stolb;
public:
	Matrix();
	Matrix(int st, int stolb);
	Matrix(const Matrix<T>& obj);
	~Matrix();
	void Random();
	void Print();
	T** GetMatrix();
	int GetStr();
	int GetStolb();
	template<typename A>
	Matrix<T>& operator=(const A a);
	template<typename A>
	Matrix<T> operator-(const A a);
	template<typename A>
	Matrix<T> operator+(const A a);
	template<typename A>
	Matrix<T> operator*(const A a);
	template<typename A>
	Matrix<T> operator/(const A a);
	Matrix<T>& operator++();
	Matrix<T> operator++(int);
	Matrix<T>& operator--();
	Matrix<T> operator--(int);
	bool operator>(const Matrix<T>& obj);
	bool operator<(const Matrix<T>& obj);
	bool operator==(const Matrix<T>& obj);
	bool operator>=(const Matrix<T>& obj);
	bool operator<=(const Matrix<T>& obj);
	bool operator!=(const Matrix<T>& obj);
};

template<class T>
template<typename A>
Matrix<T> Matrix<T>::operator*(const A a) {
	Matrix<T> obj = *this;
	int col = stolb, lines = str;
	for (int i = 0; i < lines; i++) {
		for (int j = 0; j < col; j++) {
			obj.mas[i][j] *= (int)a;
		}
	}
	return obj;
}

template<class T>
template<typename A>
Matrix<T> Matrix<T>::operator/(const A a) {
	Matrix<T> obj = *this;
	int col = stolb, lines = str;
	for (int i = 0; i < lines; i++) {
		for (int j = 0; j < col; j++) {
			obj.mas[i][j] /= (int)a;
		}
	}
	return obj;
}

template<class T>
Matrix<T> Matrix<T>::operator--(int) {
	Matrix<T>obj = *this;
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < stolb; j++) {
			mas[i][j]--;
		}
	}
	return obj;
}

template<class T>
Matrix<T> Matrix<T>::operator++(int) {
	Matrix<T>obj = *this;
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < stolb; j++) {
			mas[i][j]++;
		}
	}
	return obj;
}

template<class T>
Matrix<T>& Matrix<T>::operator++() {
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < stolb; j++) {
			mas[i][j]++;
		}
	}
	return *this;
}

template<class T>
Matrix<T>& Matrix<T>::operator--() {
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < stolb; j++) {
			mas[i][j]--;
		}
	}
	return *this;
}

template<class T>
bool Matrix<T>::operator>(const Matrix<T>& obj) {
	int sum1 = 0, sum2 = 0, col1 = str, col2 = obj.stolb, line1 = str, line2 = obj.str;
	for (int i = 0; i < line1; i++) {
		for (int j = 0; j < col1; j++) {
			sum1 += (int)mas[i][j];
		}
	}
	for (int i = 0; i < line2; i++) {
		for (int j = 0; j < col2; j++) {
			sum2 += (int)obj.mas[i][j];
		}
	}
	return sum1 > sum2 ? 1 : 0;
}

template<class T>
bool Matrix<T>::operator<(const Matrix<T>& obj) {
	int sum1 = 0, sum2 = 0, col1 = str, col2 = obj.stolb, line1 = str, line2 = obj.str;
	for (int i = 0; i < line1; i++) {
		for (int j = 0; j < col1; j++) {
			sum1 += (int)mas[i][j];
		}
	}
	for (int i = 0; i < line2; i++) {
		for (int j = 0; j < col2; j++) {
			sum2 += (int)obj.mas[i][j];
		}
	}
	return sum1 < sum2 ? 1 : 0;
}

template<class T>
bool Matrix<T>::operator==(const Matrix<T>& obj) {
	int sum1 = 0, sum2 = 0, col1 = str, col2 = obj.stolb, line1 = str, line2 = obj.str;
	for (int i = 0; i < line1; i++) {
		for (int j = 0; j < col1; j++) {
			sum1 += (int)mas[i][j];
		}
	}
	for (int i = 0; i < line2; i++) {
		for (int j = 0; j < col2; j++) {
			sum2 += (int)obj.mas[i][j];
		}
	}
	return sum1 == sum2 ? 1 : 0;
}

template<class T>
bool Matrix<T>::operator>=(const Matrix<T>& obj) {
	int sum1 = 0, sum2 = 0, col1 = str, col2 = obj.stolb, line1 = str, line2 = obj.str;
	for (int i = 0; i < line1; i++) {
		for (int j = 0; j < col1; j++) {
			sum1 += (int)mas[i][j];
		}
	}
	for (int i = 0; i < line2; i++) {
		for (int j = 0; j < col2; j++) {
			sum2 += (int)obj.mas[i][j];
		}
	}
	return sum1 >= sum2 ? 1 : 0;
}

template<class T>
bool Matrix<T>::operator<=(const Matrix<T>& obj) {
	int sum1 = 0, sum2 = 0, col1 = str, col2 = obj.stolb, line1 = str, line2 = obj.str;
	for (int i = 0; i < line1; i++) {
		for (int j = 0; j < col1; j++) {
			sum1 += (int)mas[i][j];
		}
	}
	for (int i = 0; i < line2; i++) {
		for (int j = 0; j < col2; j++) {
			sum2 += (int)obj.mas[i][j];
		}
	}
	return sum1 <= sum2 ? 1 : 0;
}

template<class T>
bool Matrix<T>::operator!=(const Matrix<T>& obj) {
	int sum1 = 0, sum2 = 0, col1 = str, col2 = obj.stolb, line1 = str, line2 = obj.str;
	for (int i = 0; i < line1; i++) {
		for (int j = 0; j < col1; j++) {
			sum1 += (int)mas[i][j];
		}
	}
	for (int i = 0; i < line2; i++) {
		for (int j = 0; j < col2; j++) {
			sum2 += (int)obj.mas[i][j];
		}
	}
	return sum1 != sum2 ? 1 : 0;
}

template<typename T, typename A>
Matrix<T> operator+(A a, Matrix<T> obj) {
	Matrix<T> obj1 = obj;
	T** ptr = obj1.GetMatrix();
	for (int i = 0; i < obj1.GetStr(); i++) {
		for (int j = 0; j < obj1.GetStolb(); j++) {
			ptr[i][j] += a;
		}
	}
	return obj1;
}

template<class T>
template<typename A>
Matrix<T> Matrix<T>::operator-(const A a) {
	Matrix<T> obj = *this;
	int col = stolb, lines = str;
	for (int i = 0; i < lines; i++) {
		for (int j = 0; j < col; j++) {
			obj.mas[i][j] -= (int)a;
		}
	}
	return obj;
}

template<class T>
template<typename A>
Matrix<T> Matrix<T>::operator+(const A a) {
	Matrix<T> obj = *this;
	int col = stolb, lines = str;
	for (int i = 0; i < lines; i++) {
		for (int j = 0; j < col; j++) {
			obj.mas[i][j] += (int)a;
		}
	}
	return obj;
}

template<class T>
template<typename A>
Matrix<T>& Matrix<T>::operator=(const A a) {
	for (int i = 0; i < str; i++) {
		for (int j = 0; j < stolb; j++) {
			mas[i][j] = a;
		}
	}
	return *this;
}

template<class T>
Matrix<T>::Matrix()
{
	mas = nullptr;
	str = stolb = 0;
}
template<class T>
Matrix<T>::Matrix(int st, int stol)
{
	str = st;
	stolb = stol;
	mas = new T * [str];
	for (int i = 0; i < str; i++)
	{
		mas[i] = new T[stolb];
	}
}

template<class T>
Matrix<T>::Matrix(const Matrix<T>& obj)
{
	str = obj.str;
	stolb = obj.stolb;
	mas = new T * [str];
	for (int i = 0; i < str; i++)
	{
		mas[i] = new T[stolb];
	}
	// copy
	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < stolb; j++)
		{
			mas[i][j] = obj.mas[i][j];
		}
	}
}
template<class T>
Matrix<T>::~Matrix()
{
	for (int i = 0; i < str; i++)
	{
		delete[] mas[i];
	}
	delete[] mas;
}

template<class T>
void Matrix<T>::Random()
{
	srand(time(0));
	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < stolb; j++)
		{
			mas[i][j] = rand() % 100*1.6;
		}
	}
}

template<class T>
void Matrix<T>::Print()
{
	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < stolb; j++)
		{
			cout<<mas[i][j] <<"\t";
		}
		cout << endl << endl;
	}
}

template<class T>
T** Matrix<T>::GetMatrix() {
	return mas;
}

template<class T>
int Matrix<T>::GetStolb() {
	return stolb;
}

template<class T>
int Matrix<T>::GetStr() {
	return str;
}

template<class T>
ostream& operator<<(ostream& os, Matrix<T> a) {
	int lines = a.GetStr();
	int col = a.GetStolb();
	T** ptr = a.GetMatrix();
	for (int i = 0; i < lines; i++) {
		for (int j = 0; j < col; j++) {
			os << ptr[i][j] << "\t";
		}
		os << "\n\n";
	}
	return os;
}