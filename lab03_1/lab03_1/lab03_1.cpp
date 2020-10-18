// Lab_03_1.cpp 
// Квач Павло Сергійович 
// Лабораторна робота № 3.1 
// Розгалуження, задане формулою: функція однієї змінної. 
// Варіант 13

#include <iostream> 
#include <cmath> 

using namespace std;

int main() {
    double x;  // вхідний параметр     
    double y;  // результат обчислення виразу     
    double A;  // проміжний результат - функціонально стала частина виразу     
    double B;  // проміжний результат - функціонально змінна частина виразу 

    cout << "x = "; cin >> x;
    A = 2 * abs(x - 5);

        // спосіб 1: розгалуження в скороченій формі
    if (x < -1)
        B = pow(sin(x), 2) / (1 + abs(cos(x)));
    if (x >= -1 && x <= 1)
        B = pow(cos(1. / abs(x + 2)),2);
    if (x > 1)
        B = log(abs(x + 2));
    y = A - B;
    cout << "1) y = " << y << endl;
        // спосіб 2: розгалуження в повній формі
    if (x<-1)
        B = pow(sin(x), 2) / (1 + abs(cos(x)));
    else
        if (x >= -1 && x <= 1)
           B = pow(cos(1. / abs(x + 2)), 2);
        else
            B = log(abs(x + 2));
    y = A - B;
    cout << "2) y = " << y << endl;
    cin.get();     
    return 0;
}