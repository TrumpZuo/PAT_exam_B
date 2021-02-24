#include <iostream>

using namespace std;
int main()
{
    int cnt[6] = {0};
    int ans[6] = {0};
    char f_ans[7] = {'N'};

    int a4_sum = 0;

    int n = 0;
    cin >> n;
    while (n--)
    {
        int temp = 0;
        cin >> temp;
        if (temp % 5 == 0 && temp % 2 == 0)
        {
            cnt[1]++;
            ans[1] += temp;
        }
        else if (temp % 5 == 1)
        {
            cnt[2]++;
            if (cnt[2] % 2 == 0)
                temp = -temp;
            ans[2] += temp;
        }
        else if (temp % 5 == 2)
        {
            cnt[3]++;
            ans[3] = cnt[3];
        }
        else if (temp % 5 == 3)
        {
            cnt[4]++;
            a4_sum += temp;
        }
        else if (temp % 5 == 4)
        {
            cnt[5]++;
            if (temp > ans[5])
                ans[5] = temp;
        }
    }

    double ans_4=0.0;
    if (cnt[4] > 0)
        ans_4 = (double)a4_sum / cnt[4];
    for (int i = 1; i <= 5; i++)
    {
        if(i<=3)
        {
        if(cnt[i]==0)cout<<"N ";
        else cout<<ans[i]<<" ";
        }
        else if(i==4)
        {
            if(cnt[i]==0)cout<<"N ";
            else printf("%.1f ",ans_4);
        }
        else if(i==5)
        {
            if(cnt[i]==0)cout<<"N"<<endl;
            else cout<<ans[i]<<endl;
        }

    }
}