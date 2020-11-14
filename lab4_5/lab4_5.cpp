//Lab4_5

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R1, R2;
	srand((unsigned)time(NULL));

	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if ((x * x + y * y <= R2 * R2 && y >= 0 && x <= 0) ||
			(x >= 0 && y <= 0 && !(x * x + y * y <= R2 * R2) && x * x + y * y <= R1 * R1))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
	
		for (int i = 0; i < 10; i++)
		{
			x = rand() * (R1*2) / RAND_MAX - R1;
			y = rand() * (R1*2) / RAND_MAX - R1;
			if ((x * x + y * y <= R2 * R2 && y >= 0 && x <= 0) ||
				(x >= 0 && y <= 0 && !(x * x + y * y <= R2 * R2) && x * x + y * y <= R1 * R1))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}