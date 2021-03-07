#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int n;char c;
    cin>>n>>c;
    int row=(round((double)n/2.0)),col=n;
    for(int i=0;i<row;i++)
    {
        if(i==0||i==row-1)
        {
            for(int j=0;j<n;j++)cout<<c;
            cout<<endl;
        }
        else
        {
            for(int j=0;j<n;j++)
            {
                if(j==0||j==n-1)
                cout<<c;
                else cout<<" ";               
            }
            cout<<endl;
        }
    }
}
