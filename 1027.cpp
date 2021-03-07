#include<iostream>
using namespace std;
int main()
{
    int cnt;char ans;
    cin>>cnt>>ans;

    int half_row=0;
    int temp=(cnt-1)/2,sum=0;
    for(half_row=1;  ;half_row++)
    {
        sum+=(1+half_row*2);
        if(sum>temp)
        {
            sum=sum-(half_row*2+1);
            half_row--;
            break;
        }
    }

    int extra = cnt-(sum*2+1);
    // cout<<half_row;
    int space=0;
    for(int i=0;i<half_row;i++)
    {
        space=i;
        while((space--)>0)cout<<" ";

        int cnt=half_row-i;
        for(int j=0;j<cnt*2+1;j++)
        cout<<ans;

       while((space--)>0)cout<<" ";
        cout<<"\n";
    }
    space= half_row;
    if(cnt>0)
    {
        while((space--)>0)
        cout<<" ";
        cout<<ans;

        cout<<endl;
    }

       for(int i=half_row-1;i>=0;i--)
    {
        space=i;
        while((space--)>0)cout<<" ";

        int cnt=half_row-i;
        for(int j=0;j<cnt*2+1;j++)
        cout<<ans;

        cout<<"\n";
    }

    cout<<extra<<endl;

}