#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <Windows.h>

using namespace std;

int Sum(int mas[], const int n)
{
    if (n < 0)
        return 0;
    else
        if (mas[n] % 2 != 0)
            return mas[n] + Sum(mas, n - 1);
        else
            return Sum(mas, n - 1);
}

int Kilk(int mas[], const int n)
{
    if (n < 0)
        return 0;
    else
        if (mas[n] % 2 != 0)
            return 1 + Kilk(mas, n - 1);
        else
            return Kilk(mas, n - 1);
}
void Create(int* mas, const int n, const int Low, const int High, int i)
{
    mas[i] = Low + rand() % (High - Low + 1);
    if (i < n - 1)
        Create(mas, n, Low, High, i + 1);
}
void Print(int* mas, const int n, int i)
{
    cout << setw(4) << mas[i];
    if (i < n - 1)
        Print(mas, n, i + 1);
    else
        cout << endl;
}
int main()
{
    SetConsoleOutputCP(1251);
    srand((unsigned)time(NULL));
    int c = -50;
    int b = 50;
    double ser;

    const int N = 5;

    int a[N];

    Create(a, N, c, b, 0);
    Print(a, N, 0);
    int K = Kilk(a, N);
    int S = Sum(a, N);
    if (K == 0)
        ser = 0;
    else
        ser = S * 1. / K;

    cout << endl;

    cout << "середнє арифметичне = " << ser << endl;

    return 0;
}