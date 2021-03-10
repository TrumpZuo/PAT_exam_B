
#include<map>
#include<math.h>
#include<iostream>
using namespace std;
bool isPrime(int n)
{
    bool ans=true;
    if(n<=1) ans=false;
    else
    {
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0){ans=false;break;}
        }
    }
    return ans;   
}

int main(void)
{
    int n;cin>>n;
    int a[10000]={0};
    map<int,bool>word;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        word[a[i]]=true;
    }
    int k;cin>>k;
    bool isIn=true;
    for(int i=0;i<k;i++)
    {
        int check,sub=0;
        cin>>check;
        for(int j=0;j<n;j++)
        {
            if(j==n-1  && a[j]!=check)isIn=false;//�����±�(����)
            if(check==a[j])
            {   sub=j;
                break;
            }
        }
        if(isIn==false) printf("%04d: Are you kidding?\n",check);
        else if(word[a[sub]]==true&&isIn==true)
        {
            if(sub==0)
            printf("%04d: Mystery Award\n",a[sub]);
            else if(isPrime(sub+1)==true)
            {
                printf("%04d: Minion\n",a[sub]);
            }
            else {
                printf("%04d: Chocolate\n",a[sub]);
            }
            word[a[sub]]=false;
        }
        else if(word[sub]==false&&isIn==true)
        {
             printf("%04d: Checked\n",a[sub]);
        }
        isIn=true;
    }
}

//���Ե�2��ͨ��
// #include<iostream>
// #include<math.h>
// using namespace std;
// bool isPrime(int n)
// {
//     bool ans=true;
//     if(n<=1) ans=false;
//     else
//     {
//         for(int i=2;i<=sqrt(n);i++)
//         {
//             if(n%i==0){ans=false;break;}
//         }
//     }
//     return ans;   
// }
// int main(){
// 	int N,K;//N���������� K������ѯID 
// 	cin>>N;
// 	int rank[N],isChecked[N]={0};//rank�±��Ӧ����,�洢ID isChecked��0��ʾδ��ȡ 
// 	for(int i=0;i<N;i++) cin>>rank[i];
    
// 	cin>>K;    
// 	for(int i=0;i<K;i++)
//     {
// 		int id,cnt=0;//cnt=1��ID���� 
// 		cin>>id;
// 		printf("%04d: ",id);//���Ƹ�ʽ ���ǰ��0 
// 		for(int j=0;j<N;j++)
//         {
// 			if(id==rank[j])
//             { 
// 				cnt=1;
// 				if(isChecked[j]==1)
//                 {//����ȡ��Ʒ
// 					isChecked[j]=1; cout<<"Checked"<<endl; break;
// 				} else if(j==0)
//                 {//�ھ�
// 					isChecked[j]=1; cout<<"Mystery Award"<<endl; break;
// 				} else if(isPrime(j+1))
//                 {//���������� 
// 					isChecked[j]=1; cout<<"Minion"<<endl; break;
// 				} else
//                 {
// 					  isChecked[j]=1; cout<<"Chocolate"<<endl; break;
// 				}
                
// 			}
// 		}
// 		if(cnt==0) cout<<"Are you kidding?"<<endl;
// 	}
// 	return 0;
// } 

