#include<bits/stdc++.h>
using namespace std;
int main()
{
    int stu[100]={0};
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        stu[temp]++;
    }
    int k;cin>>k;
    for(int i=0;i<k;i++)
    {
        int temp=0;
        cin>>temp;
        if(i<k-1)cout<<stu[temp]<<" ";
        else cout<<stu[temp];
    }


}