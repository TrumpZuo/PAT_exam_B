// #include<bits/stdc++.h>
// using namespace std;
// struct huaquan
// {
//     int han;
//     int hua;
// }jia,yi;
// int main()
// {
//     int jia_win=0,yi_win=0;
//     int n;cin>>n;
//     while(n--)
//     {
//         cin>>jia.han>>jia.hua;
//         cin>>yi.han>>yi.hua;
//         if(jia.hua==jia.han+yi.han&&yi.hua!=jia.han+yi.han)
//         {
//             jia_win++;
//         }
//         else if(yi.hua==jia.han+yi.han&&jia.hua!=jia.han+yi.han)
//         {
//             yi_win++;
//         }

//     }
//     cout<<yi_win<<" "<<jia_win<<endl;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int team[1001]={0};
    int n;cin>>n;
    int max=0,maxID=0;
   //Ͱ�㷨
   while(n--)
   {
       int a,b,c;
       scanf("%d-%d %d",&a,&b,&c);
       team[a]+=c;
       if(team[a]>max)
       {
           max=team[a];
           maxID=a;
       }
   }
   cout<<maxID<<" "<<max<<endl;
   
}