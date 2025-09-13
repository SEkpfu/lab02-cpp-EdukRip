#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double x, f;

	cout << "Введите x = ";
	cin >> x;

	if (x <= 10)
	{
		if (x <= -2)
			f = 0;
		else
			f = x * x + 4 * x + 5;
	}
	else
		f = 1 / (x * x + 4 * x - 5);

	cout << "f(x) = " << f;

}