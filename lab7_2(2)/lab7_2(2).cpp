#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int** mas, const int size, const int Low, const int High, int i, int j)
{
    mas[i][j] = Low + rand() % (High - Low + 1);
    if (j < size - 1)
        Create(mas, size, Low, High, i, j + 1);
    else
        if (i < size - 1)
            Create(mas, size, Low, High, i + 1, 0);
}
void Print(int** mas, const int size, int i, int j)
{
    cout << setw(4) << mas[i][j];
    if (j < size - 1)
        Print(mas, size, i, j + 1);
    else
        if (i < size - 1)
        {
            cout << endl;
            Print(mas, size, i + 1, 0);
        }
        else
            cout << endl << endl;
}
int Min(int** mas, const int size, const int NumofRow,int j, int min)
{
    if (mas[NumofRow][j] < min)
    min = mas[NumofRow][j];
    if (j < size - 1)
        return Min(mas, size, NumofRow, j + 1, min);
    
}
void Sum(int** mas, const int size, int& min, int i, int& sum)
{
    if (i % 2 != 0)
    {
        min = mas[i][0];
        sum += Min(mas, size, i, 0, min);
    }
    if (i < size - 1)
        Sum(mas, size, min, i + 1, sum);
}

int main()
{
    srand((unsigned)time(NULL));
    int Low = -50;
    int High = 50;
    int N;
    cout << "N = "; cin >> N;
    int** mas = new int* [N];
    for (int i = 0; i < N; i++)
        mas[i] = new int[N];
    Create(mas, N, Low, High, 0, 0);
    Print(mas, N, 0, 0);
    int min, sum = 0;

    Sum(mas, N, min, 0, sum);
    cout << "Sum of min = " << sum << endl;
    for (int i = 0; i < N; i++)
        delete[] mas[i];
    delete[] mas;
    return 0;
}


