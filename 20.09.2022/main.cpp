#include <iostream>
#include <ctime>
#include"Point.h"
#include"Matrix.h"

int main()
{
	//Matrix<int> obj1(3, 5);
	//obj1.Random();
	//obj1.Print();

	//Matrix<double> obj2(2, 3);
	//obj2.Random();
	//obj2.Print();

	//Matrix<char> obj3(5, 5);
	//obj3.Random();
	//obj3.Print();

	Matrix<Point> a(5, 5);
	a.Random();
	cout << a <<endl <<"-----------------------------" << endl;
	Matrix<Point> sum = a+1;
	Matrix<Point> sum2 = 1 + a;
	cout << sum;
	cout << "\n---------------------------------------------------\n";
	cout << sum2;
	if (sum == sum2) {
		cout << "\nsum1 = sum2\n";
	}
}