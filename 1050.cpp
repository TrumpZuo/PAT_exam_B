#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>

using namespace std;
int main()
{
    int N;cin>>N;
    vector<int>num(N);
    for(int i=0;i<N;i++)cin>>num[i];//������ N=0 ʱ�����쳣

    sort(num.begin(),num.begin()+N);
    reverse(num.begin(),num.end());

    int m=0,n=0;
    for(int i=(int)sqrt(N);i<=N;i++)
    {
        if(N%i==0)
        {
            m= i>(double) sqrt(N) ? i: N/i;
            n=N/m;
            break;
        }
    }

    int cnt=0,cursor=0,base=0,circle=0;
    int ans[m][n]={0};

//circle ���Ȧ��
    for( circle=0;cnt<N;circle++)
    {
        //���� �����������룻
        for(cursor = circle, base=circle ;cursor<n-circle;cursor++) 
        {ans[base][cursor]= num[cnt];cnt++;}
        //���� ���϶���
        for(cursor=1+circle,base=n-1-circle;cursor<m-circle;cursor++)
        {ans[cursor][base]=num[cnt];cnt++;}
        //���� ��������
        for(cursor=n-1-1-circle,base=m-1-circle;cursor>=circle;cursor--)
        {ans[base][cursor]=num[cnt];cnt++;}
        //���� ���¶���
        for(cursor=m-1-1-circle,base=circle;cursor>=1+circle;cursor--)
        {ans[cursor][base]=num[cnt];cnt++;}
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ans[i][j];
            if(j<n-1) cout<<" ";
            else cout<<endl;
        }
    }
}