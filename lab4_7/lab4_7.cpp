#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double xp, xk, x, dx, eps, a, y, R, S;
	int n;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "---------------------------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(14) << "exp(-pow(x,2))" << " |"
		<< setw(10) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "---------------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		n = 0;
		a = 1;
		S = a;
		do {
			n++;
			R = -1. * pow(x, 2) / n;
			a *= R;
			S += a;
		} while (abs(a) >= eps);
		y = exp(-pow(x, 2));
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(14) << setprecision(5) << y << " |"
			<< setw(10) << setprecision(5) << S << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "---------------------------------------------" << endl;
	return 0;
}