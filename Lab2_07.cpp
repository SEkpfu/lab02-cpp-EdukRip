#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");

	double x, y,res;

	cout << "Введите 2 числа: ";
	cin >> x >> y;

	char sign;

	cout << "Введите знак арифметической операции (+, -, *): ";
	cin >> sign;

	switch (sign)
	{
	case '+':
		res = x + y;
		cout << "Результат = " << res;
		break;
	case '-':
		res = x - y;
		cout << "Результат = " << res;
		break;
	case '*':
		res = x * y;
		cout << "Результат = " << res;
		break;
	default:
		cout << "Неверные данные";
		break;
	}
	
}