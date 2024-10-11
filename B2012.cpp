#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    double c = static_cast<double>(b) / static_cast<double>(a);     //整数化双精度浮点数
    cout << fixed << setprecision(6);   //将C变成6位小数

    double d = c *100;
    cout << fixed << setprecision(3);
    cout << d << "%";

    cin.ignore();
    getchar();
    return 0;
}