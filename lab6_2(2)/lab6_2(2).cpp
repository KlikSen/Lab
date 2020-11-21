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
        if (abs(mas[n]) % 2 == 1)
            return mas[n] + Sum(mas, n - 1);
        else
            return Sum(mas, n - 1);
}

int Kilk(int mas[], const int n)
{
    if (n < 0)
        return 0;
    else
        if (abs(mas[n]) % 2 == 1)
            return 1 + Kilk(mas, n - 1);
        else
            return Kilk(mas, n - 1);
}


int main()
{
    SetConsoleOutputCP(1251);
    srand((unsigned)time(NULL));
    int c = -50;
    int b = 50;
    int ser = 0;

    const int N = 5;

    int a[N];

    for (int i = 0; i < N; i++)
        a[i] = (c + rand() % (b - c + 1));

    for (int i = 0; i < N; i++)
        cout << a[i] << " ";

    ser = Sum(a, N) / Kilk(a, N);

    cout << endl;

    cout << "середнє арифметичне = " << ser << endl;

    return 0;
}