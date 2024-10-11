#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int c = a/b;
    int d = a%b;
    cout << c << " " << d;

    cin.ignore();
    getchar();
    return 0;
}