#include <iostream>

using namespace std;
struct stud
{
    string name;
    string num;
    int score;
    /* data */
} temp[1000];;

int main()
{
    int n;
    cin >> n;
     // 不可为  未知数 作为数组长度值
    for (int i = n; i > 0; i--)
    {
        cin >> temp[i].name >> temp[i].num >> temp[i].score;
    }
    int min = 1, max = 1;
    for (int i = n; i > 0; i--)
    {
        if (temp[i].score < temp[min].score)
            min = i;
        if (temp[i].score > temp[max].score)
            max = i;
    }
    cout << temp[max].name << " " << temp[max].num << endl;
    cout << temp[min].name << " " << temp[min].num << endl;

    return 0;
}