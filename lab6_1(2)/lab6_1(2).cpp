#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;
int Sum(int *mas, const int n)
{
    if (n < 0)
        return 0;
    else
        if ((mas[n] > 0) && ((mas[n] % 2) == 0))
            return mas[n] + Sum(mas, n - 1);
        else
            return Sum(mas, n - 1);
}
int Kilk(int *mas, const int n)
{
    if (n < 0)
        return 0;
    else
        if ((mas[n] > 0) && ((mas[n] % 2) == 0))
            return 1 + Kilk(mas, n - 1);
        else
            return Kilk(mas, n - 1);
}
void Zamina(int *mas, const int n, int i)
{
        if ((mas[i] > 0) && ((mas[i] % 2) == 0))
            mas[i] = 0;
        if (i < n - 1)
            Zamina(mas, n, i +1);
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
    srand((unsigned)time(NULL));
    int c = -20;
    int b = 30;
    const int N = 25;
    int a[N];

    Create(a, N, c, b, 0);
    Print(a, N, 0);
    
    cout << endl;
  
    cout << "Amount of numbers = " << Kilk(a, N) << "   " << "Sum of numbers = " << Sum(a, N) << endl;

    Zamina(a, N, 0);
    Print(a, N, 0);
    return 0;
}