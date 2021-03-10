// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;cin>>n;
//     double ans=0.0;
//     double temp;
//     for(int i=1;i<=n;i++)
//     {
//         cin>>temp;
//         ans+=temp*(n-i+1)*i;
//     }
//     printf("%.2lf\n",ans);
//     //测试点3 无法通过
// }
#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{ 
 int n; double t; long long sum=0;
 cin>>n; for(int i=0;i<n;i++)
 {
  cin>>t; 
  sum+=(long long)(t*1000)*(i+1)*(n-i); 
 } 
 cout<<setiosflags(ios::fixed)<<setprecision(2)<<sum/1000.0; 
 return 0;
}

