#include <bits/stdc++.h>
using namespace  std;

int main()
{
    //字符串作为数组下标
    int cnt[128]={0};
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        cnt[str[i]]++;
    }
    int i=str.size();
    while(i--)
    {
         if(cnt['P']-->0)cout<<"P";
         if(cnt['A']-- >0)cout<<"A";
         if(cnt['T']-- >0)cout<<"T";
         if(cnt['e']-- >0)cout<<"e";
         if(cnt['s']-- >0)cout<<"s";
         if(cnt['t']-- >0)cout<<"t";


    }

    return 0;
}
