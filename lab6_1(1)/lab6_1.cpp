#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;
int Sum(int mas[], const int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        if ((mas[i] > 0) && ((mas[i] % 2) == 0))
        s += mas[i];

    return s;
}
int Kilk(int mas[], const int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
        if ((mas[i] > 0) && ((mas[i] % 2) == 0))
            k++;
    return k;
}
void Zamina (int mas[], const int n)
{
    for (int i = 0; i < 25; i++)
        if ((mas[i] > 0) && ((mas[i] % 2) == 0))
            mas[i] = 0;
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

    Zamina(a, N);

    for (int i = 0; i < 25; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}