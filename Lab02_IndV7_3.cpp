#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");

    double x, y;
    bool flag = false;

    cout << "Введите x = ";
    cin >> x;

    cout << "Введите y = ";
    cin >> y;

    if (y >= -0.5 * x - 4 && y >= 0.5 * x - 4)
    {
        if (x * x + y * y <= 64)
        {
            if (not (y < 4 && y > 0 && x < 0))
            {
                flag = true;
            }
        }
    }
    if (flag)
        cout << "Точка с координатами (" << x << ", " << y << ") входит в заштрихованную область";
    else
        cout << "Точка с координатами (" << x << ", " << y << ") не входит в заштрихованную область";
}

