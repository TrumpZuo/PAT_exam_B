
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
    // Hello World Here I Come  cin���������ո�ֹͣ
    // Come I Here World ello (����while ѭ��ʱ�����Ľ��)

    cnt--; // cnt����ֵΪ string��������ֵ ��һ
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