
// lab_13_2.
//main.cpp
#include <stdio.h>
#include <conio.h>

#include "main.h"



void main()
{
	puts("Lab 13.2. Using macros and preprocessing directive");
	int x, y, 
		num;
	char ch; 
	do
	{

		// то шукаємо максимум з трьох чисел
		puts("define maximum of two numbers");
		puts("Input 2 integer numbers");
		scanf("%d", &x);// введення числа
		PRINTI(x); // макрос виведення числа
		scanf("%d", &y);
		PRINTI(y);
#if Z == 1 // якщо умова істинна,
		num = MAX(SQR(x - y), MODUL(y - x));
		PRINTI(num);
#else // компілювати іншу частину програми, якщо N >= 10
		{
		num = MIN(x + y * y, Z + x * x);
		PRINTI(num);
	}
#endif // завершення блоку умовної компіляції
		puts("Repeat? y /n "); ch = getch();
	} while (ch == 'y');
}