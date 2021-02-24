
#include <iostream>
using namespace std;
int main()
{
    int num[500] = {0};
    int cnt = 1;
    do
    {
        cin >> num[cnt];
        cnt++;
    } while (cin.get() != '\n');

    cnt--;
    int ans[500] = {0};

    int i = 1;
    while (i <= cnt)
    {
        if (i % 2 != 0)
            ans[i] = num[i] * num[i + 1];
        else
        {
            ans[i] = num[i] - 1;
            if (ans[i] < 0)
                cnt -= 2;
        }
        i++;
    }
    if(cnt==0)
    {
        cnt+=2;
        ans[1]=0;
        ans[2]=0;
    }


    for (int i = 1; i <= cnt; i++)
    {
        if (i != cnt)
            cout << ans[i] << " ";
        else
            cout << ans[i];
    }
    //3 4 -5 2 6 1 -2 0
    //12 3 -10 1 6 0
}