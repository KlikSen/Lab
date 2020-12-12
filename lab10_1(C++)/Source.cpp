#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void CreateTXT(char* fname)
{
	ofstream fout(fname);
	char ch;
	string s;
	do
	{
		cin.get();
		cin.sync();
		cout << "enter line: "; getline(cin, s);
		fout << s << endl;
		cout << "continue? (y/n): "; cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	cout << endl;
}
void PrintTXT(char* fname)
{
	ifstream fin(fname);
	string s;
	while (getline(fin, s))
	{
		cout << s << endl;
	}
	cout << endl;
}
void ProcessTXT1(char* fname, int& k)
{
	ifstream fin(fname);
	string s;
	while (getline(fin, s))
	{
		for (unsigned i = 0; i < s.length(); i++)
			if (s[i] == ',' && s[i + 1] == '-')
				k++;
	}
}
int main()
{
	int k = 0;
	char fname[100];
	cout << "enter file name 1: "; cin >> fname;
	CreateTXT(fname);
	PrintTXT(fname);
	ProcessTXT1(fname, k);
	cout << "k(,-) = " << k << endl;

	return 0;
}