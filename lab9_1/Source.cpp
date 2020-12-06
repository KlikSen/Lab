#include<iostream>
#include <string>
#include <iomanip>
#include <Windows.h>
using namespace std;
enum Kurs { I = 1, II, III, IV, V, VI };
enum Spec { IT, ME, MF, FI, KN };
string kursStr[] {"I", "II", "III", "IV", "V", "VI"};
string specStr[]{ "IT", "ME", "MF", "FI", "KN" };
struct Student {
	unsigned NumGr;
	string prizv;
	Kurs kurs;
	Spec spec;
	unsigned Fiz;
	unsigned Mat;
	unsigned Inf;
};
//Student s1 = { 12, "123", I, FI };
void Create(Student* s, const int N)
{
	int kurs;
	int spec;
	for (int i = 0; i < N; i++)
	{

		cout << "������� � " << i + 1 << ":" << endl;
		cin.get();
		cin.sync();

        cout << " �������: ";  getline(cin, s[i].prizv);
		cout << " ���������� ����� �������� � ����: "; cin >> s[i].NumGr;
		cout << " ����: "; cin >> kurs;
		cout << " ������������ (0 - IT, 1 - ME, 2 - MF, 3 - FI, 4 - KN): "; cin >> spec;
		cout << " ������ � ������: "; cin >> s[i].Fiz;
		cout << " ������ � ����������: "; cin >> s[i].Mat;
		cout << " ������ � �����������: "; cin >> s[i].Inf;
		s[i].kurs = (Kurs)kurs;
		s[i].spec = (Spec)spec;
		cout << endl;
	}
};
void Print(Student *s, const int N)
{
	cout << "================================================================="
		<< endl;
	cout << "|  �  |   �������   | ����� | ���� | ���� | Գ�. | ���. | ���. |"
		<< endl;
	cout << "-----------------------------------------------------------------"
		<< endl;
	for (int i = 0; i < N; i++)
	{
		cout << "| " << setw(3) << right << i + 1 << " ";
		cout << "| " << setw(13) << left << s[i].prizv
			<< "| " << setw(5) << right << s[i].NumGr << " "
			<< "| " << setw(4) << right << kursStr[s[i].kurs - 1] << " "
			<< "| " << setw(4) << right << specStr[s[i].spec] << " "
			<< "| " << setw(4) << right << s[i].Fiz << " "
			<< "| " << setw(4) << right << s[i].Mat << " "
			<< "| " << setw(5) << right << s[i].Inf << "|" << endl;
	}
	cout << "================================================================="
		<< endl;
	cout << endl;
};
void Vidminno(Student* s, const int O, const int N, int& K)
{
	for (int i = 0; i < N; i++)
		if (s[i].Fiz == O && s[i].Mat == O && s[i].Inf == O)
			K++;
}
void Fiz5(Student* s, const int N )
{
	cout << " ������� ��������, �� �������� � ������ ������ �5� : " << endl;
	for (int i = 0; i < N; i++)
		if (s[i].Fiz == 5)
			cout << s[i].prizv << endl;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int N, O, K = 0;
	cout << "������ N : "; cin >> N;
	cout << "����������� ������: "; cin >> O;

	Student* s = new Student[N];
	Create(s, N);
	Print(s, N);

	Vidminno(s, O, N, K);
	cout << " ������� ��������, �� ������� �� ������� : " << setw(5) << 100. * K / N << "%" << endl;

	Fiz5(s, N);
	return 0;
}