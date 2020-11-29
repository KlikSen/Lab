#include <iostream>
#include <string>
using namespace std;
void Count(const string s, int& k)
{
	k = 0;
	size_t pos = 0;
	while ((pos = s.find(',', pos)) != -1)
	{
		pos++;
		if (s[pos] == '-')
			k++;
	}
}
string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find(',', pos)) != -1)
		if (s[pos + 1] == '-')
			s.replace(pos, 2, "*");
	return s;
}
int main()
{
	int k;
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	Count(str, k);
	cout << "String contained " << k << " groups of '+ -'" << endl;
	string dest = Change(str);
	cout << "Modified string : " << dest << endl;
	return 0;
}