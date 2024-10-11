#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    cin >> x;

    long long num = trunc(x);
    cout << num;

    cin.ignore();
    getchar();
    return 0;
}