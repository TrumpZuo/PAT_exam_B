#include<bits/stdc++.h>
using namespace std;
int main()
{
    string right,wrong;
    cin>>right>>wrong;

    for(int i=0;i<wrong.size();i++)
    {
        int j=right.find(wrong[i]);
        right.erase(j,1);
    }
    // cout<<right<<endl;

    string ans;
    for(int i=0;i<right.size();i++)
    {
        if(ans.find(toupper(right[i]))==string::npos)
        ans+=toupper(right[i]);
    }

    cout<<ans;

    // set<char>ans;//set将进行自动排序，与题目不符
    // for(int i=0;i<right.size();i++)
    // {
    //     if('a'<= right[i]<='z')
    //     right[i]=toupper(right[i]);
    //     if(ans.count(right[i])==0)
    //     ans.insert(right[i]);
    // }
    // for(auto p=ans.begin();p!=ans.end();p++)
    // cout<<*p;

}