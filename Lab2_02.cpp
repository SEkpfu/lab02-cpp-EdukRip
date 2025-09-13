#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int num;

	cout << "Введите число = ";
	cin >> num;

	cout << "a) ";
	if (num > 0)
		cout << "Число " << num << " положительное" << endl;
	if (num == 0)
		cout << "Число " << num << " = 0" << endl;
	if (num < 0)
		cout << "Число " << num << " отрицательное" << endl;

	cout << "b) ";
	if (num % 2 == 0)
		cout << "Число " << num << " чётное" << endl;
	else
		cout << "Число " << num << " нечётное" << endl;
		
}