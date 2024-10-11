#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    double c = static_cast<double>(a) / static_cast<double>(b);     //整数化双精度浮点数
    cout << fixed << setprecision(9);
    cout << c;

    cin.ignore();
    getchar();
    return 0;
}