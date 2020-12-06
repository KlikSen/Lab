#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#pragma warning(disable : 4996)

using namespace std;
void Count(char* str, int& kilk)
{
	if (strlen(str) < 2)
		kilk = 0;
	int k = 0;
	for (int i = 0; str[i + 1] != 0; i++)
		if (str[i] == ',' && str[i + 1] == '-')
			k++;
	kilk = k;
}
char* Change(char* str)
{
	if (strlen(str) < 2)
		return str;
	char* tmp = new char[strlen(str) * 4 / 3 + 1];
	char* t = tmp;
	tmp[0] = '\0';
	int i = 0;
	while (str[i + 1] != 0)
	{
		if (str[i] == ',' && str[i + 1] == '-')
		{
				strcat(t, "*");
			t += 1;
			i += 2;
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
		}
	}
	*t++ = str[i++];
	*t++ = str[i++];
	*t = '\0';
	strcpy(str, tmp);
	return tmp;
}
int main()
{
	int kilk;
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	Count(str, kilk);
	cout << "String contained " << kilk << " groups of ', -'" << endl;
	char* dest = new char[151];
	dest = Change(str);
	cout << "Modified string : " << dest << endl;
	return 0;
}