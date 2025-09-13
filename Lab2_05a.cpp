#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	
	double r, d, a, b;
	
	cout << "Введите радиус торта = ";
	cin >> r;
	cout << "Введите стороны коробки a и b = ";
	cin >> a >> b;

	d = 2 * r; //Диаметр торта

	if ((a >= d) && (b >= d))
	{
		cout << "Торт радиусом " << r << " поместится в коробку со сторонами " << a << " и " << b << endl;

		double c, z;
		cout << "Введите высоту торта = ";
		cin >> z;
		cout << "Введите высоту коробки = ";
		cin >> c;

		if (c >= z)
			cout << "Торт высотой " << z << " поместится в коробку с высотой " << c;
		else
			cout << "Торт не поместится";

	}
	else
		cout << "Торт не поместится";
}