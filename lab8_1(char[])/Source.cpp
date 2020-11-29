#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void Count(char* s, int& k)
{
	int pos = 0;
	k = 0;
	char* t;
	while (t = strchr(s + pos, ','))
	{
		pos = t - s + 1;
		if (s[pos] == '-')
			k++;
	}
}
char* Change(char* s)
{
	char* t = new char[strlen(s)];
	char* p;
	int pos1 = 0,
		pos2 = 0;
	*t = 0;
	while (p = strchr(s + pos1, ','))
	{
		if (s[p - s + 1] == '-')
		{
			pos2 = p - s + 2;
			strncat(t, s + pos1, pos2 - pos1 - 2);
			strcat(t, "*");
			pos1 = pos2;
		}
	}
	strcat(t, s + pos1);
	strcpy(s, t);
	return t;
}
int main()
{
	int k;
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	Count(str, k);
	cout << "String contained " << k << " groups of ', -'" << endl;
	char* dest = new char[151];
	dest = Change(str);
	cout << "Modified string : " << dest << endl;
		return 0;
}