#include<bits/stdc++.h>
using namespace std;
//��0����10000���������ݣ���Ҫ����λ�����µ�����ת��Ϊ�ַ���
void SwitchToArray(int n, char* num)
{
    int temp=n;
    for(int i=3;i>=0;i--)
    {
        num[i]=temp%10+'0';
        temp/=10;
    }
}
bool compare(char a, char b)
{
    return a>b;
}


int main()
{
    int n;
    cin>>n;

    char num[5]="";
    SwitchToArray(n,num);
    // cout<<num;
    int min =0,max=0;
    int ans=0;

    do
    {
    sort(num,num+4);
    sscanf(num,"%d",&min);

    sort(num,num+4,compare);
    sscanf(num,"%d",&max);
      
    ans=max-min;
    printf("%04d - %04d = %04d\n",max,min,ans);
    SwitchToArray(ans,num);
    }while(ans!=0&&ans!=6174);   
}