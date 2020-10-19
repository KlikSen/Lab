// Lab_03_3.cpp  
// Квач Павло Сергійович  
// Лабораторна робота № 3.3 
// Розгалуження, задане графіком функції  
// Варіант 13 

#include <iostream> 
#include <cmath> 
#include <windows.h>

using namespace std;

int main()
{
	double x;
	double R;
	double y;

	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;

	if (x <= -R)
		y = x + R;
	else
		if (x > -R && x <= 0)
			y = sqrt(R * R - x * x);
		else
			if (x > 0 && x <= 6)
				y = x * -R / 6 + R;
			else
				y = x - 6;

	cout << "y = " << y << endl;

	cin.get();
	return 0;
}