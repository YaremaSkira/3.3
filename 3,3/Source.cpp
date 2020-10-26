// Lab_03_3.cpp
// < прізвище, ім’я автора >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 0.1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	
		double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -1 - R)
		y = 1;
	else
		if (-1 - R < x && x <= 0)
			y = R - sqrt(R * R - x * x);
		else
			if (-1 < x && x <= 2)
				y = -R;
			else
				y = x*(R - 4) / 2 + 4;
				
					
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}