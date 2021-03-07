#include<bits/stdc++.h>

int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char _map[11]={'1','0','X','9','8','7','6','5','4','3','2'};
using namespace std;
int main()
{
    int n;cin>>n;
    int cnt=0,ans=n;
    while(n--)
    {
        string num;
        cin>>num;
        int sum=0;
        for(int i=0;i<17;i++)
        {
            sum+=(num[i]-'0')*weight[i];
        }
        int z=sum%11;
        if(_map[z]==num[17])
        {
            cnt++;
        }
        else cout<<num<<endl;
    }
    if(ans==cnt)cout<<"All passed"<<endl;
}