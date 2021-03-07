#include<bits/stdc++.h>
using namespace std;


struct node
{
    int ad;
    int date;
    int next;
}lis[100000];
int main()
{
    int head,n,k;
    cin>>head>>n>>k;
//n个节点中存在无效节点，需要进行判断
    while(n--)
    {
        int address;
        cin>>address;
        cin>>lis[address].date>>lis[address].next;
        lis[address].ad=address;
    }
    
    vector<node>v;
    int i;
    for( i=head;lis[i].next!=-1;i=lis[i].next)
    {
        v.push_back(lis[i]);
    }    
    v.push_back(lis[i]);//插入最后一条标记

    int x=v.size()%k;//最后的节点无需翻转
    for(int cnt=0;cnt+k-1<v.size()-x;cnt+=k) //处理的最大位移量为(cnt+k-1)，
    reverse(v.begin()+cnt,v.begin()+cnt+k);  //v.begin()+cnt+k 所在的数据并不处理，否则将处理K+1个数据

    //处理next数据
    int j;
    for(j=0;j<v.size();j++)
    {
        v[j].next=v[j+1].ad;
    }
    v[--j].next=-1;//最后的节点反转后，其next上可能不是-1
  
    for( j=0;j<v.size()-1;j++)
    printf("%05d %d %05d\n",v[j].ad,v[j].date,v[j].next);
    //最后一行输出-1
    printf("%05d %d %d\n",v[j].ad,v[j].date,v[j].next);

}