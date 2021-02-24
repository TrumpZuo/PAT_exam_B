//   abcde  eabcd
#include <iostream>
using namespace std;
int main()
{
    int size, m;
    cin >> size >> m;
    int array[100];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    while (m--) //每次位移一位
    {
        int temp = array[size - 1];
        for (int i = size - 1; i >= 0; i--)
        {
            if (i - 1 >= 0)
                array[i] = array[i - 1];
            else
                array[i] = temp;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
            cout << array[i] << " ";
        else
            cout << array[i];
    }
    return 0;
}
//考虑最小位移量
