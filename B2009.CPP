#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int sum = (a+b)/c;
    cout << sum;

    cin.ignore();
    getchar();
    return 0;
}