//Lab 5.5
#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;
int a = 1;
int b = 1;
int c = 1;
int m = 100;
int f(int n)
{
	if (n > 2)
	{
	    return (a * f(n - 1) + b * f(n - 2) + c) % m;
	}
	else
		if (n == 2)
		{
			srand((unsigned)time(NULL));
			return rand() % 100;
		}
		else
		{
			srand((unsigned)time(NULL));
		    return rand() % 25;
	}
}

int main()
{
	int g;

	cout << "g = "; cin >> g;

	for (int i = 1; i <= g; i++)
	{
		int V = f(i);
		cout << "V = " << V << endl;
	}

	return 0;
}