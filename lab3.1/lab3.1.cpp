// Lab_03_1.cpp
// < Синчук Іван Романович >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 14
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	double C;
	double e = std::exp(1); // число е
	cout << "x = "; cin >> x;

	A = (4*x-1);
	if (A < 0)
		A = A * (-1);



	// спосіб 1: розгалуження в скороченій формі
	if (x < 0)
		B = (pow(x, 7)) - 2 * x;
	if (0 <= x && x < 3)
		B = atan(((pow(e, x)) + 1)/8);
	if (x >=3)
		B = (pow(x, 4)) +pow(e , pow(x, 2) + 3); 
	y = A + B;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x < 0)
		B = pow(x, 7) - 2 * x;
	else if (0 <= x && x < 3)
		B = std::atan((pow(e, x) + 1)/8);
	else if (x >= 3)
		B = pow(x, 4) + pow(e, pow(x, 2) + 3);
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}