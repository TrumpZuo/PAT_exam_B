#include<bits/stdc++.h>
using namespace std;
struct birth 
{
    string name;
    int y;int m;int d;
    int age;
}peo[1000];

bool  compare(birth a,birth b)
{
    if(a.y!=b.y)
    return a.y<b.y;
    else if(a.m!=b.m)
    return a.m< b.m;
    else if(a.d!=b.d)
    return a.d<=b.d;
}
int main()
{
    int n;
    cin>>n;

    string temp;
    int cnt=0;
   for(int i=0,j=0;j<n;i++,j++)
   {
       cin>>peo[i].name>>temp;
       peo[i].y=stoi(temp.substr(0,4),nullptr,10);
       peo[i].m=stoi(temp.substr(5,2),nullptr,10);
       peo[i].d=stoi(temp.substr(8,2),nullptr,10);

        peo[i].age=2014-peo[i].y;
        if(peo[i].age==200)
        {
          if(peo[i].m-9<0) peo[i].age++;
          else if(peo[i].m==9 && peo[i].d-6<0) peo[i].age++;
        }
        if(peo[i].age==0)
        {
            if(peo[i].m>9) peo[i].age--;
            else if(peo[i].m==9&&peo[i].d>6) peo[i].age--;
        }

        if(peo[i].age<=200&&peo[i].age>=0)cnt++;
        else --i;
   }


    sort(peo,peo+cnt,compare);//sort函数，需要输入 指针类型的数据

    //存储较多的数据导致第四个测试点 无法通过
    

//测试点3：符合条件的人数为0时
    if(cnt!=0)
    cout<<cnt<<" "<<peo[0].name<<" "<<peo[cnt-1].name<<endl;
    else cout<<"0"<<endl;
    // for(int i=0;i<n;i++)
    // cout<<peo[i].name;
}