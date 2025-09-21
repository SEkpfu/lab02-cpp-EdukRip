#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");

    int cactus;

    cout << "Введите количество кактусов: ";
    cin >> cactus;

    cout << "Мыши изгрызли " << cactus << " кактус";

    if (cactus / 10 % 10 == 1)
        cout << "ов";
    else if (cactus % 10 == 2 || cactus % 10 == 3 || cactus % 10 == 4)
        cout << "а";
    else if (cactus % 10 != 1)
        cout << "ов";

}

