//�� 1 ����ͬ�Ĵ�дӢ����ĸ
//����Сд�����֣��ǵ� 4 ����ĸ D
//����������
#include<bits/stdc++.h>
using namespace std;

void printdate(int ans)
{
    map<int ,string> date;
    date[1]="MON"; date[2]="TUE";date[3]="WED";
    date[4]="THU";date[5]="FRI";date[6]="SAT";
    date[7]="SUN";
    cout<<date[ans]<<" ";

}
void findSame(string str1,string str2)
{
    int ans1=-1,ans2=-1;
    int i=0;
    for(;i<str1.size();i++)
    {
        if(str1[i]==str2[i]&&(str1[i]>='A'&&str1[i]<='G'))
        {
            ans1=str1[i]-'A'+1;
            printdate(ans1);
            break;
        }
    }
    i++;
    for(;i<str1.size();i++)
    {
        if(str1[i]==str2[i])
        {
            if(str1[i]>='A'&&str1[i]<='N')
            {
                ans2=str1[i]-'A'+10;
                 printf("%02d:",ans2);
                 break;
            }
            else if(str1[i]<='9'&& str1[i]>='0')
            {
                ans2=str1[i]-'0';
                 printf("%02d:",ans2);
                 break;
            }
        }
    }
// 1.ȷ���ܼ�����ĸ��A~G�����Ա����ַ�����ʱ�򣬵�һ���͵ڶ����ַ�������ͬλ����ĸ����һ������Ҫ��A~G�ڵ�
// 2.ȷ��Сʱ���ַ���������1��������ĸ��λ�ã���Ϊ�����ַ�����һ����ͬ���ַ���8������Ŀ�ĳ�������E������������Ϣ��������ң�
//��Χ0~9��A~N���ڣ���ĸ�ǿ�������ĸ���е�λ�ã�A��λ��Ϊ1��



        // if(str1[i]==str2[i]&&(str1[i]>='A'&&str1[i]<='Z')) 
        // {
        //     cnt--;           
        //     if(cnt==1)
        //     {
        //         ans=str1[i]-'A'+1;printdate(ans);
        //     }
        //     else if(cnt==0)
        //     {
        //         if(str1[i]<='9'&& str1[i]>='0') ans=str1[i]-'0';
        //         else if(str1[i]>='A'&&str1[i]<='N')
        //         ans=str1[i]-'A'+10;
        //         printf("%02d:",ans);
        //         break;
        //     }           
        // }//����ĸ�Ĵ������ ����
    
    
}

void findTime(string str1,string str2)
{
    int ans=-1;
    for(int i=0;i<str1.size();i++)
    {
        if(str1[i]==str2[i]&&((str1[i]>='A'&&str1[i]<='Z')||(str1[i]>='a'&&str1[i]<='z'))) 
        {
            ans=i;              //������ĿҪ�󣡣���
            printf("%02d\n",ans);
            break;
        }
    }
}

int main()
{
    int i=0;
    string str[4];
    while(i<4) cin>>str[i++];
    findSame(str[0],str[1]);
    findTime(str[2],str[3]);
}
//������ȷ
/*ע��㣺1.ȷ���ܼ�����ĸ��A~G�����Ա����ַ�����ʱ�򣬵�һ���͵ڶ����ַ�������ͬλ����ĸ����һ������Ҫ��A~G�ڵ�
2.ȷ��Сʱ���ַ���������1��������ĸ��λ�ã���Ϊ�����ַ�����һ����ͬ���ַ���8������Ŀ�ĳ�������E������������Ϣ��������ң���Χ0~9��A~N���ڣ���ĸ�ǿ�������ĸ���е�λ�ã�A��λ��Ϊ1��
3.�����ַ�������ͬλ�þ�����ͬ��ĸ�Ķ�����ֹ���ԣ�������ȷ��Сʱ��һ��Ҫ����ѭ������Ȼ���滹��������һ������2�ģ���ʹ����ˣ���һ�����Ե������������
4.��������ַ�����ȷ�����ӵ���Ӣ����ĸA~Z �Լ�a~z�����ַ��������λ�ã����㿪ʼ��������
5.Сʱ���߷��Ӳ�������λ��Ҫ�ǵò��㡣*/