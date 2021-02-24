
#include <iostream>
using namespace std;
int main()
{
    string str[80];
    int cnt = 0;
    do
    {
        cin >> str[cnt];
        cnt++;
    } while (cin.get() != '\n');
    // Hello World Here I Come  cin输入流遇空格停止
    // Come I Here World ello (采用while 循环时产生的结果)

    cnt--; // cnt的数值为 string数组的最大值 加一
    while (cnt >= 0)
    {
        cout << str[cnt];
        if (cnt > 0)
            cout << " ";
        cnt--;
    }
    system("pause");
    return 0;

}