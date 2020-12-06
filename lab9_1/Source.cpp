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

		cout << "Студент № " << i + 1 << ":" << endl;
		cin.get();
		cin.sync();

        cout << " прізвище: ";  getline(cin, s[i].prizv);
		cout << " порядковий номер студента у групі: "; cin >> s[i].NumGr;
		cout << " курс: "; cin >> kurs;
		cout << " спеціальність (0 - IT, 1 - ME, 2 - MF, 3 - FI, 4 - KN): "; cin >> spec;
		cout << " оцінки з фізики: "; cin >> s[i].Fiz;
		cout << " оцінки з математики: "; cin >> s[i].Mat;
		cout << " оцінки з інформатики: "; cin >> s[i].Inf;
		s[i].kurs = (Kurs)kurs;
		s[i].spec = (Spec)spec;
		cout << endl;
	}
};
void Print(Student *s, const int N)
{
	cout << "================================================================="
		<< endl;
	cout << "|  №  |   Прізвище   | Номер | Курс | Спец | Фіз. | Мат. | Інф. |"
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
	cout << " прізвища студентів, які отримали з фізики оцінку “5” : " << endl;
	for (int i = 0; i < N; i++)
		if (s[i].Fiz == 5)
			cout << s[i].prizv << endl;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int N, O, K = 0;
	cout << "Введіть N : "; cin >> N;
	cout << "Максимальна оцінка: "; cin >> O;

	Student* s = new Student[N];
	Create(s, N);
	Print(s, N);

	Vidminno(s, O, N, K);
	cout << " процент студентів, які вчаться на “відмінно” : " << setw(5) << 100. * K / N << "%" << endl;

	Fiz5(s, N);
	return 0;
}