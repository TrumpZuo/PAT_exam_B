#include<bits/stdc++.h>
using namespace std;

//错误的键 将永远无法在输入的错误字符串中中找到，若同时
//该字符无法在输出的结果字符串中找到，可以将该字符加入到结果中


int main()
{
    string right,wrong,ans;
    cin>>right>>wrong;
    for(int i=0;i<right.size();i++)
    {
        if(
            wrong.find(right[i])==string::npos
            &&
            ans.find(toupper(right[i]))==string::npos
          )
          ans+=toupper(right[i]);        
    }
    cout<<ans<<endl;

}