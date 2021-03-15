#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int N;cin>>N;
    vector<int> v(N);
    for(int i=0;i<N;i++)cin>>v[i];
    sort(v.begin(),v.end());
    reverse(v.begin(),v.begin()+N);

    int m,n;
    for(int i=(int)sqrt(N);i<=N;i++)
    {
        if(N%i==0)
        {
            m= i>(double) sqrt(N)? i :N/i;
            n=N/m;
            break;
        }
    }

    int ans[m][n]={0};
    int i,j,k=-1;

    for(i=0;k<N-1;i++)
    {
        for(j=i;j<n-i &&k<N-1;j++) ans[i][j]=v[++k];
        for(j=i+1;j<m-i &&k<N-1; j++) ans[j][n-i-1]=v[++k];
        for(j=n-2-i;j>=i &&k<N-1;j--) ans[m-1-i][j]=v[++k];
        for(j=m-2-i;j>=i+1 && k<N-1;j--)ans[j][i]=v[++k];
    }

    for(int i=0;i<m;i++)
      for(int j=0;j<n;j++)
      {
          cout<<ans[i][j];
          if(j<n-1)cout<<" ";
          else cout<<endl;
      }

}
