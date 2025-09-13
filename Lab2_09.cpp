#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");

	double x, y;

	cout << "Введите координаты точки: ";
	cin >> x >> y;

	//И опять же. Считать ли линию? (Буду)
	
	cout << "a) ";

	if ((y >= 0) && (x <= 0) && (y <= 1) && (x >= -2))
		cout << "Принадлежит" << endl;
	else
		cout << "Не принадлежит" << endl;

	cout << "b) ";

	if ((y >= 0) && (x*x + y*y <= 25))
		cout << "Принадлежит" << endl;
	else
		cout << "Не принадлежит" << endl;

	cout << "c) ";

	if ((x >= 0) && (x*x + y*y >= 9) && (x*x + y*y <= 36))
		cout << "Принадлежит" << endl;
	else
		cout << "Не принадлежит" << endl;

	cout << "d) ";

	if ((x >= 0) && (y >= 0) && (y <= (-2) * x + 2))
		cout << "Принадлежит" << endl;
	else
		cout << "Не принадлежит" << endl;
}