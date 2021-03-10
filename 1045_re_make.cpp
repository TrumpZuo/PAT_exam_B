#include<bits/stdc++.h>

using namespace std;
int main()
{

    int n;cin>>n;
    int a[n]={0},b[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);

    int max=0;
    int ans[100000]={0}; 
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(b[i]>=max) max=b[i];

        if(b[i]==a[i] && b[i]>=max)
        {
            ans[cnt]=b[i];
            cnt++;
        }
    }
    cout<<cnt<<endl;
    
    for(int i=0;i<cnt;i++)
    {
        if(i!=cnt-1)cout<<ans[i]<<" ";
        else cout<<ans[i];
    }
    cout<<endl;
}