//大数加法，大数除法
//不必考虑；
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,d;
   cin>>a>>b>>d;
   
//   int sum=a+b;
//未考虑sum=0的情形
//   int ans[100]={0},len=0;
//    while(sum)
//    {
//        ans[len++]=sum%d;
//        sum/=d;
//    }
//    for(int i=len-1;i>=0;i--)
//    cout<<ans[i];
//    return 0;
    int ans=a+b;

   stack<int>sta;
   while(ans)
   {
       sta.push(ans%d);
       ans/=d;
   }
   if(sta.empty())cout<<"0"<<endl;
   while(!sta.empty())
   {
       cout<<sta.top();
       sta.pop();
   }
   return 0;
}