#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;
int Sum(int mas[], const int n)
{
    if (n < 0)
        return 0;
    else
        if ((mas[n] > 0) && ((mas[n] % 2) == 0))
            return mas[n] + Sum(mas, n - 1);
        else
            return Sum(mas, n - 1);
}
int Kilk(int mas[], const int n)
{
    if (n < 0)
        return 0;
    else
        if ((mas[n] > 0) && ((mas[n] % 2) == 0))
            return 1 + Kilk(mas, n - 1);
        else
            return Kilk(mas, n - 1);
}
int Zamina(int mas[], const int n)
{
    if ((mas[n] > 0) && ((mas[n] % 2) == 0))
        return Zamina(mas, n - 1);
    else 
        return 0;
}
int main()
{
    srand((unsigned)time(NULL));
    int c = -20;
    int b = 30;
    const int N = 25;
    int a[N];

    for (int i = 0; i < 25; i++)
        a[i] = (c + rand() % (b - c + 1));
 
    for (int i = 0; i < 25; i++)
        cout << a[i] << " ";
    
    cout << endl;
  
    cout << "Amount of numbers = " << Kilk(a, N) << "   " << "Sum of numbers = " << Sum(a, N) << endl;

    for (int i = 0; i < 25; i++)
    {
        if ((a[i] > 0) && ((a[i] % 2) == 0))
        a[i] = Zamina(a, i);
    }

    for (int i = 0; i < 25; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}