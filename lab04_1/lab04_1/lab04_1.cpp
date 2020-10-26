// Lab_04_1.cpp   
// Квач Павло Сергійович   
// Лабораторна робота № 4.1  
//  Цикли 
// Варіант 13  
#include <iostream> 
#include <cmath> 

using namespace std;

int main() {
    int k, N;     double P;
     
    cout << "N = "; cin >> N;

    P = 1;     
    k = N;     
    while (k <= 25) 
    {
        P *= sqrt(1 + N * 1. / k);
        k++; 
    }     
    cout << P << endl;
   

    P = 1;     
    k = N;     
    do { 
        P *= sqrt(1 + N * 1. / k);
        k++;
    } while (k <= 25);     
    cout << P << endl;

    P = 1;     
    for (k = N; k <= 25; k++) 
    { 
       P *= sqrt(1 + N * 1. / k);
    }     
    cout << P << endl;

    P = 1;     
    for (k = 25; k >= N; k--) 
    { 
        P *= sqrt(1 + N * 1. / k);
    }     
    cout << P << endl;

    return 0;
}