#include<bits/stdc++.h>
using namespace std;

// ÿ��ɨ�赽A�������A��ɵ�PAT�պ���Aǰ���P����*A����T��������
// so������һ���ַ���������ÿ��λ��ǰ��A������
// Ȼ��Ӻ��������T��������ɨ�赽A ����������  
// Aǰ���P����*A����T��������
int main()
{
    string str;
    cin>>str;
    int cnt_p=0,cnt_t=0,cnt_a=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='T')cnt_t++;
    }
    int ans=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='P')cnt_p++;
        else if(str[i]=='T')cnt_t--;//������������һ���T�ĸ���
        else if(str[i]=='A')
        {
            ans =  (ans+((cnt_t*cnt_p)%1000000007))%1000000007;
        }
    }
    cout<<ans<<endl;

}