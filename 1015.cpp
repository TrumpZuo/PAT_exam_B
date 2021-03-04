#include<bits/stdc++.h>
using namespace std;

struct stu
{
     string num;
     int de_s;
     int cai_s;
     int sum;
     char type;
}info[100000];

bool compare( stu a,stu b)
{
    if(a.type!=b.type) return a.type<b.type;
    else if(a.sum!=b.sum) return a.sum>b.sum;
    else if(a.de_s!=b.de_s) return a.de_s>b.de_s;
    else return a.num<b.num;
}
int main()
{
    int n,l,h;
    cin>>n>>l>>h;
    int cnt=n;
    int i=0;
    while(n--)
    {
        cin>>info[i].num>>info[i].de_s>>info[i].cai_s;
        info[i].sum= info[i].cai_s+info[i].de_s;
        if(info[i].cai_s<l || info[i].de_s<l)
        {
            cnt--;
            info[i].type='E';
        }
        else if(info[i].cai_s>=h&&info[i].de_s>=h)
        {
            info[i].type='A';
        }
        else if(info[i].de_s>=h&&info[i].cai_s<h)
        {
            info[i].type='B';
        }
        else if(info[i].de_s>=info[i].cai_s)
        {
            info[i].type='C';
        }
        else info[i].type='D';

        i++;
    }
    sort(info,info+i,compare);

    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++)
    cout<<info[i].num<<" "<<info[i].de_s<<" "<<info[i].cai_s<<endl;



}