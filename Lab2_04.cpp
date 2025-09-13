#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int dM, dW;
	cout << "Введите дату: ";
	cout << "День месяца: ";
	cin >> dM;
	cout << "Номер дня в неделе: ";
	cin >> dW;

	if (((13 == dM) && (5 == dW || 2 == dW)) || ((17 == dM) && (5 == dW)))
		cout << "неудачный день ";

	return 0;
}