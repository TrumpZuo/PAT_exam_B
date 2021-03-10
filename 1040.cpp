#include<bits/stdc++.h>
using namespace std;

// 每次扫描到A，用这个A组成的PAT刚好是A前面的P数量*A后面T的数量。
// so，遍历一遍字符串，存下每个位置前面A的数量
// 然后从后遍历计数T的数量，扫描到A 就总数加上  
// A前面的P数量*A后面T的数即可
int main()
{
    string str;
    cin>>str;
    int cnt_p=0,cnt_t=0,cnt_a=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='T')cnt_t++;
    }
    int ans=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='P')cnt_p++;
        else if(str[i]=='T')cnt_t--;//计算所在另外一侧的T的个数
        else if(str[i]=='A')
        {
            ans =  (ans+((cnt_t*cnt_p)%1000000007))%1000000007;
        }
    }
    cout<<ans<<endl;

}