#include<bits/stdc++.h>
using namespace std;
char number[13]={'0','1','2','3','4','5','6','7','8','9','J','Q','K'};
int main()
{
    string a,b;
    cin>>a>>b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());

    string ans;
    int wei=0,sub=0;
    int len_a=a.size(),len_b=b.size();
    while(sub<len_a||sub<len_b)
    {
        wei++;
        int temp_a= (sub>=len_a)? 0:a[sub]-'0';
        int temp_b= (sub>=len_b)? 0:b[sub]-'0';

        if(wei%2==1)
        {
            int i=(temp_a+temp_b)%13;
            ans+=number[i];
        }
        else 
        {
            int i=temp_b-temp_a;
            if(i<0)i+=10;
            ans+=number[i];
        }
        sub++;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
}