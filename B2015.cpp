#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double r1, r2;
    cin >> r1 >> r2;

    double R = 1/((1/r1)+(1/r2));
    cout << fixed << setprecision(2);
    cout << R;

    cin.ignore();
    getchar();
    return 0;
}