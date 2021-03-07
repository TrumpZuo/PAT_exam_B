
//Î´³É¹¦
#include<bits/stdc++.h>
using namespace std;
struct birth 
{
    string name;
    int y;int m;int d;
    int age;
} max_data,min_data,temp_data;

int main()
{
    int n;
    cin>>n;

    min_data.age=201;

    string temp;
    int cnt=0;
   for(int j=0;j<n;j++)
   {
       cin>>temp_data.name>>temp;
       temp_data.y=stoi(temp.substr(0,4),nullptr,10);
       temp_data.m=stoi(temp.substr(5,2),nullptr,10);
       temp_data.d=stoi(temp.substr(8,2),nullptr,10);

        temp_data.age=2014-temp_data.y;
        if(temp_data.age==200)
        {
          if(temp_data.m-9<0) temp_data.age++;
          else if(temp_data.m==9 && temp_data.d-6<0) temp_data.age++;
        }
        if(temp_data.age==0)
        {
            if(temp_data.m>9) temp_data.age--;
            else if(temp_data.m==9&&temp_data.d>6) temp_data.age--;
        }

        if(temp_data.age<=200&&temp_data.age>=0)
        {
            cnt++;
            if(temp_data.age<min_data.age ) min_data=temp_data;
            if(temp_data.age>max_data.age ) max_data=temp_data;
        }
        
   }


    if(cnt!=0)
    cout<<cnt<<" "<<max_data.name<<" "<<min_data.name<<endl;
    else cout<<"0"<<endl;
    // for(int i=0;i<n;i++)
    // cout<<temp_data.name;
}