#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;
int Sum(int *mas, const int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        if ((mas[i] > 0) && ((mas[i] % 2) == 0))
        s += mas[i];

    return s;
}
int Kilk(int *mas, const int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
        if ((mas[i] > 0) && ((mas[i] % 2) == 0))
            k++;
    return k;
}
void Zamina (int *mas, const int n)
{
    for (int i = 0; i < 25; i++)
        if ((mas[i] > 0) && ((mas[i] % 2) == 0))
            mas[i] = 0;
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
    srand((unsigned)time(NULL));
    int c = -20;
    int b = 30;
    const int N = 25;
    int a[N];

    Create(a, N, c, b);
    Print(a, N);

    cout << endl;

    cout << "Amount of numbers = " << Kilk(a, N) << "   " << "Sum of numbers = " << Sum(a, N) << endl;

    Zamina(a, N);
    Print(a, N);
    return 0;
}