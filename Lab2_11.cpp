#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");

	int Nd, Nm, Ny, d, m, y, year; // Переменные названны немного тупо

	cout << "Введите день своего рождения (день, месяц, год): ";
	cin >> Nd >> Nm >> Ny;

	cout << "Введите текущую дату (день, месяц, год): ";
	cin >> d >> m >> y;

	year = y - Ny;
	
	if (Nm >= m)
	{
		if (Nm == m)
		{
			if (Nd > d)
				year--;
		}
		else
			year--;
	}

	if ((year / 10 % 10 == 1) || (year % 10 >= 5) || (year % 10 == 0))
		cout << "Вам " << year << " лет";
	else
	{
		if (year % 10 == 1)
			cout << "Вам " << year << " год";
		if ((year % 10 >= 2) && (year % 10 <= 4))
			cout << "Вам " << year << " года";
	}
}