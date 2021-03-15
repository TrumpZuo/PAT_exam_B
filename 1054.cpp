#include<iostream>
#include<string>

using namespace std;
bool check(string str)
{

    bool ans=true;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='-'||(str[i]>='0'&&str[i]<='9')||str[i]=='.')
        {

        }
        else 
        {
            ans=false;
            break;
        }
    }
}
int main()
{
    int n;cin>>n;
    double ave=0.0;
    while(n--)
    {
        string str;
        cin>>str;
        for(int i=0;i<str.size();i++)
        {
            
        }


    }

}
