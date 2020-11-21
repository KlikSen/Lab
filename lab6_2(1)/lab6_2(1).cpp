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
        if (abs(mas[i]) % 2 == 1)
            sa += mas[i];

    return sa;

}
int Kilk(int mas[], const int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
        if (abs(mas[i])%2==1)
            k++;
    return k;
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

    for (int i = 0; i < N; i++)
        a[i] = (c + rand() % (b - c + 1));

    for (int i = 0; i < N; i++)
        cout << a[i] << " ";

    ser = Sum(a, N) / Kilk(a, N);

    cout << endl;

    cout << "середнє арифметичне = " << ser << endl;
   
    return 0;
}