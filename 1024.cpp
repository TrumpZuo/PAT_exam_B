#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;

    if(str[0]=='+')cout<<"+";
    else cout<<"-";
    int pos_E=str.find('E',1);

    bool MoreTen=true;
    if(str[pos_E+1]=='-') MoreTen = false;

    string substr=str.substr(1,pos_E-1);
    substr=substr.erase(1,1);

    // cout<<substr<<endl;

    int index=stoi(str.substr(pos_E+2),nullptr,10);
//小数点进行移动
    if(MoreTen==true)
    {
        if(index>=substr.size()-1)
        {
            int cnt_0=index-(substr.size()-1);
            cout<<substr;
            for(int i=0;i<cnt_0;i++)cout<<"0";           
        }
        else
        {
            for(int i=0;i<=index;i++)
            cout<<substr[i];
            cout<<".";
            for(int i=index+1;i<substr.size();i++)
            cout<<substr[i];
        }

    }


}