#include<bits/stdc++.h>
using namespace std;
int main()
{
    string erase_str,str,ans;
    cin>>erase_str>>str;
    for(int i=0;i<str.size();i++)
    {
        bool isPrint=true;
        for(int j=0;j<erase_str.size();j++)
        {                      
            if(toupper(str[i])==erase_str[j] )
            {isPrint=false;break;}
            if(str[i]<='Z'&&str[i]>='A'&&erase_str[j]=='+')
            {isPrint=false;break;}
        }

        if(isPrint==true) ans+=str[i];       
    }
    cout<<ans;
}