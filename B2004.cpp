#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    cout <<setw(8) << num1 << " " ;
    cout <<setw(8) << num2 << " " ;
    cout <<setw(8) << num3 << " " ;

    cin.ignore();
    getchar();
    return 0;
}