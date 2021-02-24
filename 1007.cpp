#include<iostream>
#include<math.h>
using namespace std;

bool isPirme(int i)
{
    bool ans=true;
    if(i>2)
    {
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                ans=false;
                break;
            }
        }      
    }
    else if(i<=1)ans=false;
    return ans;
}

int main()
{
    int cnt=0,n=0;
    cin>>n;
    for(int k=1;k<=n-2;k++)         //题目中指的是最大的数值 n+2不超过最大数值
    if(isPirme(k)==true && isPirme(k+2)==true)
    cnt++;
    cout<<cnt<<endl;
}