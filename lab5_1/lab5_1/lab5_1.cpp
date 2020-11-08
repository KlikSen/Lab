//Lab 5.1
#include <iostream>
#include <cmath>

using namespace std;

double h(const double a, const double b)
{
	return a * a - sin(b) * cos(a) + b * b;
}
int main()
{
	double s, t;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;

	double m = (h(1, s * t) + h(t + s, 1) * h(t + s, 1)) / (1 + h(s, t) * h(s, t) * h(s, t));
	cout << "m = " << m << endl;
	return 0;
}