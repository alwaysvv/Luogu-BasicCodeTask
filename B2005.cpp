#include <iostream>
using namespace std;

int main()
{
    char character;
    cin >> character ;

    int height = 3;
    int length = 5;

    for(int i = 0; i < height; i++)
    {
        int spaces = height -i -1;  //计算单侧空格数
        
        for(int j = 0; j< spaces; j++)  //输出spaces个空格
        {
            cout << " ";
        }

        for (int j = 0; j < (2 * i + 1); j++)   //输出等差数列个字符
        {                                       //等差数列012对应135 x=2n+1
            cout << character;
        }

        cout << endl;   //换行再输出新一轮i=0输出完换i=1输出
    }

    cin.ignore();
    getchar();
    return 0;
}