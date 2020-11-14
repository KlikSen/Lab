//Lab4_6

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double S1, S2;
	int k, i;
	S1 = 0;
	k = 1;
	while (k <= 20)

	{
		S2 = 0;
		i = k;
		while (i <= 40-k)

		{
			S2 += 1. * i * i;
			i++;

		}
		S1 += (1 + sqrt(S2)) / pow(k, 2);
		k++;

	}
	cout << S1 << endl;
	S1 = 0;
	k = 1;
	do
	{
		S2 = 0;
		i = k;
		do
		{
			S2 += 1. * i * i;
			i++;
		} while (i <= 40 - k);
		S1 += (1 + sqrt(S2)) / pow(k, 2);
		k++;
	} while (k <= 20);
	cout << S1 << endl;
	S1 = 0;
	for (k = 1; k <= 20; k++)

	{
		S2 = 0;
		for (i = k; i <= 40 - k; i++)

		{
			S2 += 1. * i * i;

		}
		S1 += (1 + sqrt(S2)) / pow(k, 2);

	}
	cout << S1 << endl;
	S1 = 0;
	for (k = 20; k >= 1; k--)

	{
		S2 = 0;
		for (i = 40 - k; i >= k; i--)

		{
			S2 += 1. * i * i;

		}
		S1 += (1 + sqrt(S2)) / pow(k, 2);

	}
	cout << S1 << endl;
	return 0;
}