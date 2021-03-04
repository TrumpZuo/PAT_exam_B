#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    char da,db;
    cin>>a>>da>>b>>db;
    int ta=da-'0',tb=db-'0';

    int ans_a=0,ans_b=0;

    for(int i=0;i<a.size();i++)
       if(a[i]==da) 
         {
             ans_a=ans_a*10+ta;
         }
    for(int i=0;i<b.size();i++)
        if(b[i]==db) 
         {
             ans_b=ans_b*10+tb;
         }
    
    int ans=ans_b+ans_a;
    cout<<ans<<endl;
    
   
    
}
