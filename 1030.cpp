#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cin>>n>>p;
    int a[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int temp=a[0]*p;
    int cnt=0;
    for(;a[cnt]<=temp;cnt++);
    cout<<cnt<<endl;


}