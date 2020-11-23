#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <Windows.h>

using namespace std;

void Sort(int *mas, const int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int max = mas[i];
        int imax = i;
        for (int j = i + 1; j < size; j++)
            if (max < mas[j])
            {
                max = mas[j];
                imax = j;
            }
        mas[imax] = mas[i];
        mas[i] = max;
    }
}
void Print(int* mas, const int n)
{
    for (int i = 0; i < n; i++)
        cout << setw(4) << mas[i];
    cout << endl;
}
void Create(int* mas, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        mas[i] = Low + rand() % (High - Low + 1);
}

template <typename T0>
void Sort2(T0* mas, const T0 size)
{
    for (T0 i = 0; i < size - 1; i++)
    {
        T0 max = mas[i];
        T0 imax = i;
        for (T0 j = i + 1; j < size; j++)
            if (max < mas[j])
            {
                max = mas[j];
                imax = j;
            }
        mas[imax] = mas[i];
        mas[i] = max;
    }
}
template <typename T1>
void Print2(T1* mas, const T1 n)
{
    for (T1 i = 0; i < n; i++)
        cout << setw(4) << mas[i];
    cout << endl;
}
template <typename T2>
void Create2(T2* mas, const T2 size, const T2 Low, const T2 High)
{
    for (T2 i = 0; i < size; i++)
        mas[i] = Low + rand() % (High - Low + 1);
}

int main()
{
    SetConsoleOutputCP(1251);
    srand((unsigned)time(NULL));
    int c = -50;
    int b = 50;

    const int N = 30;
    int *a = new int[N];
    int* t = new int[N];

    Create(a, N, c, b);
    Print(a, N);
    Sort(a, N);
    Print(a, N);

    cout << endl;

    Create2(t, N, c, b);
    Print2(t, N);
    Sort2(t, N);
    Print2(t, N);

    return 0;
}
