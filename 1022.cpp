//�����ӷ�����������
//���ؿ��ǣ�
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,d;
   cin>>a>>b>>d;
   
//   int sum=a+b;
//δ����sum=0������
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