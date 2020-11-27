#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int** mas, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            mas[i][j] = Low + rand() % (High - Low + 1);
}
void Print(int** mas, const int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            cout << setw(4) << mas[i][j];
        cout << endl;
    }
    cout << endl;
}
void Min(int **mas, const int size,const int NumofRow, int& min)
{
    min = mas[NumofRow][0];
        for (int j = 0; j < size; j++)
            if (mas[NumofRow][j] < min)
                min = mas[NumofRow][j];
}
void Sum(int** mas, const int size,int &min, int& sum)
{
    for (int i = 0; i < size; i++)
    {
        if (i % 2 != 0)
        {
            Min(mas, size, i, min);
            sum += min;
        }
    }
          
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
  Create(mas, N, Low, High);
  Print(mas, N);
  int min, sum = 0;

  Sum(mas, N, min, sum);
  cout << "Sum of min = " << sum << endl;
    for (int i = 0; i < N; i++)
      delete[] mas[i];
  delete[] mas;
  return 0;
}


