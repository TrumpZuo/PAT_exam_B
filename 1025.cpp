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
//n���ڵ��д�����Ч�ڵ㣬��Ҫ�����ж�
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
    v.push_back(lis[i]);//�������һ�����

    int x=v.size()%k;//���Ľڵ����跭ת
    for(int cnt=0;cnt+k-1<v.size()-x;cnt+=k) //��������λ����Ϊ(cnt+k-1)��
    reverse(v.begin()+cnt,v.begin()+cnt+k);  //v.begin()+cnt+k ���ڵ����ݲ����������򽫴���K+1������

    //����next����
    int j;
    for(j=0;j<v.size();j++)
    {
        v[j].next=v[j+1].ad;
    }
    v[--j].next=-1;//���Ľڵ㷴ת����next�Ͽ��ܲ���-1
  
    for( j=0;j<v.size()-1;j++)
    printf("%05d %d %05d\n",v[j].ad,v[j].date,v[j].next);
    //���һ�����-1
    printf("%05d %d %d\n",v[j].ad,v[j].date,v[j].next);

}