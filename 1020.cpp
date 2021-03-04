#include<bits/stdc++.h>
using namespace std;
struct moon
{
    int amounts;
    int sale;
    double price;
}cake[1000];
bool compare(moon a,moon b)
{
    return a.price>b.price;
}

int main()
{
    int n,d;
    cin>>n>>d;
    for(int i=0;i<n;i++)
    cin>>cake[i].amounts;
    for(int i=0;i<n;i++)
    {
        cin>>cake[i].sale;
        if(cake[i].amounts!=0)
        cake[i].price=(double)cake[i].sale/(double)cake[i].amounts;
        else cake[i].price=0.0;
    }

        //测试点2未通过
    sort(cake,cake+n,compare);
    double ans=0.0;
    int i=0;

    while(d>0)
    {
        if(d-cake[i].amounts>=0)
        {
            ans+=cake[i].sale;
        }
        else 
        {
            ans+=d*cake[i].price;
        }

        d-=cake[i].amounts;
        i++;
        if(d<0)d=0;

        if(i==n)break;
        //月饼库存总和无法满足市场需求
    }
    printf("%.2lf\n",ans);



}