

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");

    const double pi = 3.11; //Так в условии было

	int nx;
    double x;
	double R, D, L, S;

	cout << "Введите номер элемента и его значение (1 — радиус R, 2 — диаметр D = 2·R, 3 — длина L, 4 — площадь круга S): ";
	cin >> nx >> x;

	switch (nx)
	{
	case 1:
	{
		R = x;
		D = 2 * R;
		L = 2 * pi * R;
		S = pi * R * R;
		break;
	}
	case 2:
	{
		D = x;
		R = D/2;
		L = 2 * pi * R;
		S = pi * R * R;
		break;
	}
	case 3:
	{
		L = x;
		R = L/(2*pi);
		D = 2 * R;
		S = pi * R * R;
		break;
	}
	case 4:
	{
		S = x;
		R = sqrt(S / pi);
		D = 2 * R;
		L = 2 * pi * R;
		
		break;
	}
	default:
		break;
	}

	cout << "Радиус = " << R << endl;
	cout << "Диаметр = " << D << endl;
	cout << "Длина окружности = " << L << endl;
	cout << "Площадь окружности = " << S << endl;
}

