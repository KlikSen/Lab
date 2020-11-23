#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <Windows.h>

using namespace std;
int Sum(int mas[], const int n)
{
    int sa = 0;
    for (int i = 0; i < n; i++)
        if (mas[i] % 2 != 0)
            sa += mas[i];

    return sa;

}
int Kilk(int mas[], const int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
        if (mas[i]%2!=0)
            k++;
    return k;
}
void Create(int* mas, const int n, const int Low, const int High)
{
    for (int i = 0; i < n; i++)
        mas[i] = (Low + rand() % (High - Low + 1));
}
void Print(int* mas, const int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(4) << mas[i];
    cout << endl;
}

int main()
{
    SetConsoleOutputCP(1251);
    srand((unsigned)time(NULL));
    int c = -50;
    int b = 50;
    int ser = 0;
    
    const int N = 30;

    int a[N];

    Create(a, N, c, b);
    Print(a, N);
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