#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");

	int a, b, c;

	cout << "Введите 3 числа: ";
	cin >> a >> b >> c;

	cout << "a) Сумма чисел, которые больше 10 = ";
	int sum10 = 0;

	if (a > 10)
		sum10 += a;
	if (b > 10)
		sum10 += b;
	if (c > 10)
		sum10 += c;
	cout << sum10 << endl;

	cout << "b) Количество чётных = ";
	int countCh = 0;

	if (a % 2 == 0)
		countCh++;
	if (b % 2 == 0)
		countCh++;
	if (c % 2 == 0)
		countCh++;
	cout << countCh << endl;

	cout << "c) Среднее из чисел = ";

	if (a > b)
	{
		if (a > c)
		{
			if (c > b)
				cout << c << endl;
			else
				cout << b << endl;
		}
		else
			cout << a << endl;
	}
	else
	{
		if (b > c)
		{
			if (a > c)
				cout << a << endl;
			else
				cout << c << endl;
		}
		else
			cout << b << endl;
	}

	cout << "d) Номер наименьшего числа = ";

	if (a < b)
	{
		if (a < c)
			cout << 1;
		else
			cout << 3;
	}
	else
	{
		if (b < c)
			cout << 2;
		else
			cout << 3;
	}

	return 0;

}