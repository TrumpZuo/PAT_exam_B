// 234          BB  SSS  1234

#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string str;
    cin>>str;
    stack<int>sta;

    for(int i=str.size()-1;i>=0;i--)
    {
        int temp=str[i]-'0';
        sta.push(temp);
    }
    while(!sta.empty())
    {
        int cnt= sta.top();
        if(sta.size()==3)
        for(int i=cnt;i>0;i--) cout<<"B";
        else if(sta.size()==2)
        for(int i=cnt;i>0;i--) cout<<"S";
        else if(sta.size()==1)
        for(int i=1;i<=cnt;i++) cout<<i;    
        sta.pop();                    

    }
    system("pause");
    return 0;
}