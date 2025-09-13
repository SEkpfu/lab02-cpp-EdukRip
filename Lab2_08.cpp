#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");

	double x, y;

	cout << "Введите координаты попадания: ";
	cin >> x >> y;

	//По условию не очень понятно считается ли попадание в линию за участок внутри или снаружи. (У меня внутри)
	cout << "Очков: ";
	if (x * x + y * y <= 16)
	{
		if (x * x + y * y <= 4)
			cout << 10;
		else
			cout << 5;
	}
	else
		cout << 0;
	
	
}