#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, R, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(8) << "x" << " |"
		<< setw(9) << "y" << " |" << endl;
	cout << "----------------------" << endl;
	x = xp;
	while (x <= xk)
	{
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

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "----------------------" << endl;
	return 0;
}