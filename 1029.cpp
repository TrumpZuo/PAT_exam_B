#include<bits/stdc++.h>
using namespace std;

//����ļ� ����Զ�޷�������Ĵ����ַ��������ҵ�����ͬʱ
//���ַ��޷�������Ľ���ַ������ҵ������Խ����ַ����뵽�����


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