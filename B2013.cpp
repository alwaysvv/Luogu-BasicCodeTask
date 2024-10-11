#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double F;
    cin >> F;

    double C = 5*(F-32)/9;     //整数化双精度浮点数
    cout << fixed << setprecision(5);   //将C变成5位小数
    cout << C;

    cin.ignore();
    getchar();
    return 0;
}