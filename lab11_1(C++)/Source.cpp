#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void CreateBIN(char* fname) 
{
	ofstream fout(fname, ios::binary); 
	char ch;
	string s; 
	do
	{
		cin.get(); 
		cin.sync(); 
		cout << "enter line: "; getline(cin, s); 
		for (unsigned i = 0; i < s.length(); i++) 
			fout.write((char*)&s[i], sizeof(s[i])); 
		cout << "continue? (y/n): "; cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	cout << endl;
}
void PrintBIN(char* fname) 
{
	ifstream fin(fname, ios::binary); 
	char c; 
	while (fin.read((char*)&c, sizeof(c))) 
	{
		if (c == '-')
			cout << c;
		else
		cout << c << " "; 
	}
	cout << endl;
}
void ProcessBIN1(char* fname, char* gname) 
{ 
	ifstream f(fname, ios::binary);
	ofstream g(gname, ios::binary); 
	int j;
	char c;
	string s;
	while (getline(f, s)) 
	{
		for (unsigned i = 0; i < s.length(); i++)
		{
			
			if (s[i] == '-' && (s[i + 1] >= '0' && s[i + 1] <= '3') 
				&& (i == 0 || s[i - 1] == ' ')
				&& (i == s.length() - 2 || s[i + 2] == ' ')) 
			{
				c = s[i];
				g.write((char*)&c, sizeof(c)); 
				c = s[i + 1];
				g.write((char*)&c, sizeof(c));

			}
			else if ((s[i] >= '0' && s[i] <= '3') && (i == 0 || s[i - 1] == ' ')
				&& (i == s.length() - 1 || s[i + 1] == ' '))
			{
				c = s[i];
				g.write((char*)&c, sizeof(c));
			}
		}
	}
}
int main()
{
	char fname[100]; 
	cout << "enter file name 1: "; cin >> fname;
	CreateBIN(fname); 
	char gname[100]; 
	cout << "enter file name 2: "; cin >> gname;
	ProcessBIN1(fname, gname);
	PrintBIN(gname); 
	return 0;
}