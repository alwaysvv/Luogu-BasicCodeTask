#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;

    cout << static_cast<int>(a);

    cin.ignore();
    getchar();
    return 0;
}