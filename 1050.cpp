#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>

using namespace std;
int main()
{
    int N;cin>>N;
    vector<int>num(N);
    for(int i=0;i<N;i++)cin>>num[i];//数组在 N=0 时出现异常

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

//circle 标记圈数
    for( circle=0;cnt<N;circle++)
    {
        //横向 从左向右输入；
        for(cursor = circle, base=circle ;cursor<n-circle;cursor++) 
        {ans[base][cursor]= num[cnt];cnt++;}
        //纵向 由上而下
        for(cursor=1+circle,base=n-1-circle;cursor<m-circle;cursor++)
        {ans[cursor][base]=num[cnt];cnt++;}
        //横向 由右向左
        for(cursor=n-1-1-circle,base=m-1-circle;cursor>=circle;cursor--)
        {ans[base][cursor]=num[cnt];cnt++;}
        //纵向 由下而上
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