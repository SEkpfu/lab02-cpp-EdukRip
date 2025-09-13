#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");

	double x, y, z;
	bool Rb, Rs, Pr; //Для проверочек.
	Rb = false;
	Rs = false;
	Pr = false;

	cout << "Введите 3 числа: ";
	cin >> x >> y >> z;

	cout << "a) ";
	if ((x < y + z) && (y < x + z) && (z < x + y))
	{
		cout << "Существует" << endl;
		
		cout << "b) ";
		
		if ((x == z) || (x == y) || (y == z))
		{
			if ((x == y) && (y == z))
			{
				cout << "Равносторонний";
				Rs = true;
			}
			else
			{
				cout << "Равнобедренный";
				Rb = true;
			}
		}
		if ((x * x + y * y == z * z) || (z * z + y * y == x * x) || (x * x + z * z == y * y))
		{
			Pr = true;
			if (Rb)
				cout << "и прямоугольный"; //Ну корень из двух вряд-ли введут
			else
				cout << "Прямоугольный";
		}
		if (not (Pr || Rb || Rs))
			cout << "Обычный";
	}
	else
		cout << "Не существует";

}