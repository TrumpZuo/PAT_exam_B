#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n; cin>>n; 
    while(n--)
    {
        string str;
        cin>>str;
        int pos_p=-1,pos_t=-1,cnt_p=0,cnt_t=0,cnt_other=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='P') {cnt_p++;pos_p=i;}
            else if(str[i]=='T'){cnt_t++;pos_t=i;}
            else if(str[i]!='A') {cnt_other++;}           
        }
        bool ans = true;
        if(cnt_p>1||cnt_t>1||cnt_other>0) ans=false;
        else
        {
            int cnt_a=pos_t-pos_p-1;//PT 之间A的个数
            
            if(cnt_a<=0) ans=false;
            else  if((str.size()-1-pos_t)!=cnt_a*pos_p) ans=false; 

        }

        
        if(ans==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
system("pause"); 

}