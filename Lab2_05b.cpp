#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	
	double X,Y,Z,a,b;
	
	cout << "Введите стороны кирпича X, Y, Z = ";
	cin >> X >> Y >> Z;
	cout << "Введите стороны отверствия a и b = ";
	cin >> a >> b;

	if (((X <= a) && ((Z <= b) || (Y <= b))) || ((Y <= a) && ((Z <= b) || (X <= b))) || ((Z <= a) && ((X <= b) || (Y <= b))))
		cout << "Кирпич пройдёт";
	else
		cout << "Кирпич не пройдёт";

	return 0;
}