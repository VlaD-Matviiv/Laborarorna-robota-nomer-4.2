// Lab_4_2.cpp
// <Матвіїв Владислав>
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 8

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		A = (2 + 6 * x);
		if (x <= 0)
			B = log(cos(x)) + (x + x + x + x + x);
		else
			if (x > 3)
				B = 12 * x - (x * x * x * x * x * x * x * x);
			else
				B = cos((1 + log(x)) / 3) / sin((1 + log(x)) / 3);

		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;

	}
	cout << "---------------------------" << endl;

	return 0;
}