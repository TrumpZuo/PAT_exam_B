#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;cin>>n;int a[n]={0},Fin[10000]={0},ans=0;
    for(int i=0;i<n;i++)
    {cin>>a[i];}
    for(int i=0;i<n;i++)
    {   bool MainNum=true;
        if(i==0)
        {for(int j=1;j<n;j++)
            {
                if(a[j]<a[i])
                { MainNum=false;break;}
            }
        }
        else if(i==n-1)
        {
            for(int j=0;j<n-1;j++)
            {if(a[j]>a[i])
                { MainNum=false; break;}
            }
        }
        else
        {int j=i-1,k=i+1;
            while(j>=0)
            {   if(a[j]>a[i])
                { MainNum=false;break;}
                j--;
            }
            if(MainNum==true)
            {   while(k<n)
                {if(a[k]<a[i]){ MainNum=false;break;}k++;
                }
            }
        }
        if(MainNum==true)
        {  ans++;Fin[ans]=a[i];}
    }
    cout<<ans<<endl;
    for(int i=1;i<=ans;i++)
    {if(i!=ans)cout<<Fin[i]<<" ";
        else cout<<Fin[i];}

    cout<<endl;
    //  printf("\n");           不加这句会有一个测试点没法通过。
    //运行超时
}