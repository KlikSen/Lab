//////////////////////////////////////////////////////////////////////////////
// Lab_13_1.cpp
// головний файл проекту – функція main
#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
	do {
		cout << "x_p = "; cin >> x_p;
		cout << "x_k = "; cin >> x_k;
		cout << "dx = "; cin >> dx;
		cout << "e = "; cin >> e;
		cout << endl;
	} while (abs(x_p) > 1 && abs(x_k) > 1);
	cout << fixed;
	cout << "---------------------------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(14) << "exp(-pow(x,2))" << " |"
		<< setw(10) << "s" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "---------------------------------------------" << endl;

	x = x_p;
	while (x <= x_k) {
		sum(); // виклик процедури обчислення суми
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(14) << setprecision(5) << exp(-pow(x, 2)) << " |"
			<< setw(10) << setprecision(5) << s << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "---------------------------------------------" << endl;
	cin.get();
	return 0;
}
