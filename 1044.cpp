#include<bits/stdc++.h>
using namespace std;
string fore1[13]={ "tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string fore2[13]={ "###","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
int main()
{
    int n;cin>>n;
    cin.get();
    while(n--)
    {
        string str;
        getline(cin,str);
        if(str[0]>='0'&&str[0]<='9')
        {
            int temp=stoi(str,nullptr,10);
            if(temp==0)cout<<fore1[0];
            else
            {
                if(temp/13!=0)cout<<fore2[temp/13];
                if(temp/13!=0 && temp%13 !=0) cout<<" ";
                if(temp%13 !=0 || temp ==0 ) cout<<fore1[temp%13];

            }
            cout<<endl;
            // stack<int>sta;
            // //²âÊÔµã1£¬ÊäÈëÎª0
            // while(temp)
            // {
            //     sta.push(temp%13);
            //     temp/=13;
            // }
            // while (!sta.empty())
            // {
            //     if(sta.size()>1)
            //     cout<<fore2[sta.top()]<<" ";
            //     else cout<<fore1[sta.top()]<<endl;
            //     sta.pop();
            // }                     
        }
        else
        {
            string sub_str1=str.substr(0,3);
            string sub_str2;
// elo nov
// tam        
            bool Alone=false;
            if(str.size()>3)sub_str2=str.substr(4,3);
            else 
            {
                sub_str2=sub_str1;
                Alone=true;
            }
            int ans=0;
            for(int i=0;i<13;i++)
            {    
                if(sub_str1==fore2[i]&&Alone==false)
                {
                   ans+=i*13;
                }
                if( sub_str2==fore1[i])
                {
                    ans+=i;
                    break;
                }
                else if(sub_str2==fore2[i])
                {
                    ans+=(i*13);
                    break;
                }              
            }
            cout<<ans<<endl;
        }
    }
}