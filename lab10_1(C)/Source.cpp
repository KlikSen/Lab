#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	char ch1;
	char ch2;
	const int LEN = 80;
	char s[LEN];

	FILE* f;
	char fname[61];
	cout << "Enter file name: "; cin.getline(fname, sizeof(fname));
	if ((f = fopen(fname, "w+")) == NULL)
	{
		cerr << "Error opening file '" << fname << "'" << endl;
		exit(1);
	}
	do {
		cout << "Enter string (empty - to exit): ";
		cin.getline(s, LEN - 1);
		strcat(s, "\n");
		fputs(s, f);
	} while (*s != '\n');

	rewind(f);

	int k = 0;

	while (!feof(f))
	{
		ch1 = fgetc(f);
		ch2 = fgetc(f);
		if ((ch1 ==',' && ch2 == '-'))
		k++;
	}
	rewind(f);

	ch1 = fgetc(f);

	while (!feof(f))
	{
		ch1 = fgetc(f);
		ch2 = fgetc(f);
		if ((ch1 == ',' && ch2 == '-'))
			k++;
	}
	cout << k;

	fclose(f);
	return 0;
}
