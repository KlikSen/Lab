#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#pragma warning(disable : 4996)

using namespace std;
void Count(char* str, int i, int& kilk)
{
	if (str[i + 1] != 0)
		if (str[i] == ',' && str[i + 1] == '-')
		{
			kilk++;
				Count(str, i + 1, kilk);
		}
		else
			Count(str, i + 1, kilk);
}
char* Change(char* dest, const char* str, char* t, int i)
{
	if (str[i + 1] != 0)
	{
		if (str[i] == ',' && str[i + 1] == '-')
		{
			strcat(t, "*");
			return Change(dest, str, t + 1, i + 2);
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
			return Change(dest, str, t, i);
		}
	}
	else
	{
		*t++ = str[i++];
		*t++ = str[i++];
		*t = '\0';
		return dest;
	}
}
int main()
{
	int kilk = 0;
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	Count(str, 0, kilk);
	cout << "String contained " << kilk << " groups of ', -'" << endl;
	char* dest1 = new char[151];
	dest1[0] = '\0';
	char* dest2;
	dest2 = Change(dest1, str, dest1, 0);
	cout << "Modified string " << dest2 << endl;
	return 0;
}