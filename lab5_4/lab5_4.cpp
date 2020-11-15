// Лабораторна робота № 5.4
#include <iostream>
#include <cmath>
using namespace std;
double P0(const int N)
{
	double p = 1;
	for (int k = N; k <= 25; k++)
		p *= sqrt(1+1.*N/k);
	return p;
}
double P1(const int N, const int k)
{
	if (k > 25)
		return 1;
	else
		return sqrt(1 + 1. * N / k) * P1(N, k + 1);
}
double P2(const int N, const int k)
{
	if (k < N)
		return 1;
	else
		return sqrt(1 + 1. * N / k) * P2(N, k - 1);
}
double P3(const int N, const int k, double t)
{
	t = t * sqrt(1 + 1. * N / k);
	if (k >= 25)
		return t;
	else
		return P3(N, k + 1, t);
}
double P4(const int N, const int k, double t)
{
	t = t * sqrt(1 + 1. * N / k);
	if (k <= N)
		return t;
	else
		return P4(N, k - 1, t);
}
int main()
{
	int N;
	cout << "N = "; cin >> N;
	double p0, p1, p2, p3, p4;
	p0 = P0(N);
	p1 = P1(N, N);
	p2 = P2(N, 25);
	p3 = P3(N, N, 1);
	p4 = P4(N, 25, 1);
	cout << "(iter) P0 = " << p0 << endl;
	cout << "(rec up ++) P1 = " << p1 << endl;
	cout << "(rec up --) P2 = " << p2 << endl;
	cout << "(rec down ++) P3 = " << p3 << endl;
	cout << "(rec down --) P4 = " << p4 << endl;
	return 0;
}