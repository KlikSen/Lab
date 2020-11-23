#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <Windows.h>

using namespace std;

void Sort(int* mas, const int size, int i)
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

    if (i < size - 2)
        Sort(mas, size, i + 1);
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

template <typename T>
void Sort2(T* mas, const int size, T i)
{
    T max = mas[i];
    int imax = i;
    for (T j = i + 1; j < size; j++)
        if (max < mas[j])
        {
            max = mas[j];
            imax = j;
        }
    mas[imax] = mas[i];
    mas[i] = max;

    if (i < size - 2)
        Sort(mas, size, i + 1);
}
template <typename T>
void Print2(T* mas, const int size, T i)
{
    cout << setw(4) << mas[i];
    if (i < n - 1)
        Print(mas, n, i + 1);
    else
        cout << endl;
}
template <typename T>
void Create2(T* mas, const int size, const T Low, const T High, T i)
{
    mas[i] = Low + rand() % (High - Low + 1);
    if (i < n - 1)
        Create(mas, n, Low, High, i + 1);
}

int main()
{
    SetConsoleOutputCP(1251);
    srand((unsigned)time(NULL));
    int c = -50;
    int b = 50;

    const int N = 30;
    int* a = new int[N];
    int* t = new int[N];

    Create(a, N, c, b, 0);
    Print(a, N, 0);
    Sort(a, N, 0);
    Print(a, N, 0);

    cout << endl;

    Create2(a, N, c, b, 0);
    Print2(a, N, 0);
    Sort2(a, N, 0);
    Print2(a, N, 0);

    return 0;
}
