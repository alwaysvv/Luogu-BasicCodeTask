#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double r;
    cin >> r;

    double pi = 3.14159;

    double d = 2*r;
    double c = 2*pi*r;
    double s = pi*r*r;

    cout << fixed << setprecision(4);
    cout << d << " " << c << " " << s;

    cin.ignore();
    getchar();
    return 0;
}