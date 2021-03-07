#include<bits/stdc++.h>
using namespace std;
typedef long long int  llint;
llint gcd(llint a,llint b)
{
//无需考虑大小问题
    llint m=a%b;
    while(m)
    {
        a=b;
        b=m;
        m=a%b;
    }
    return b;  
}
void process(llint a,llint b)
{
    if(b==0) 
    {
        cout<<"Inf";
        return;
    }
    bool isMinus=((a<0&&b>0)||(a>0&&b<0));
     a=abs(a);
     b=abs(b);
    llint m=a/b;

    if(isMinus==true)
    {
        cout<<"(-";
    }
    if(m)
    {
        cout<<m;
        a=a-m*b;
        if(a!=0)
        cout<<" ";
    }

    llint p=gcd(a,b);
    a/=p;
    b/=p;

    if(a!=0)cout<<a<<"/"<<b;
    if(a==0&&m==0)cout<<"0";

    if(isMinus==true) cout<<")";
}

int main()
{
   llint a1,b1,a2,b2;
   scanf("%lld/%lld %lld/%lld",&a1,&b1,&a2,&b2);
   process(a1,b1);cout<<" + ";process(a2,b2);cout<<" = ";process(a1*b2+a2*b1,b1*b2);cout<<endl;
   process(a1,b1);cout<<" - ";process(a2,b2);cout<<" = ";process(a1*b2-a2*b1,b1*b2);cout<<endl;
   process(a1,b1);cout<<" * ";process(a2,b2);cout<<" = ";process(a1*a2,b1*b2);cout<<endl;
   process(a1,b1);cout<<" / ";process(a2,b2);cout<<" = ";process(a1*b2,b1*a2);cout<<endl;
}