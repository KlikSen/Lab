//Lab3_4

#include <iostream>
using namespace std;
int main()
{
	double x;
	double y;
	double R1;
	double R2;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;

	// розгалуження в повній формі
	if ((x * x + y * y <= R2 * R2 && y >= 0 && x <= 0) || 
		(x >= 0 && y <= 0 && !(x * x + y * y <= R2 * R2) && x * x + y * y <= R1 * R1))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}