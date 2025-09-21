#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");

    double x, y;

    cout << "Введите y = ";
    cin >> y;

    if (y <= 0)
    {
        if (y <= -1)
        {
            x = sin(y * M_PI);
        }
        else
            x = (y * y - 1) * (y * y - 1);

    }
    else
    {
        x = sqrt(abs(y * y - 5));
    }
    cout << "x = " << x;
}

