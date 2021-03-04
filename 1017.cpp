//特高位除法
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b;
    cin>>a>>b;

    int q=0,temp_r=0;
    //最高位情形
    q=(a[0]-'0')/b;
    temp_r=(a[0]-'0')%b;
    if((q!=0&&a.size()>1)|| a.size()==1)
    cout<<q;
    //最高位为零时，通过是否存在两位以上的数字决定

    for(int i=1;i<a.size();i++)
    {
        q=(a[i]-'0'+temp_r*10)/b;
        cout<<q;
        temp_r=(a[i]-'0'+temp_r*10)%b;
    }

    cout<<" "<<temp_r;
    return 0;
}