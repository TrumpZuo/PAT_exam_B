#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double r1,p1,r2,p2;
    cin>>r1>>p1>>r2>>p2;
    double ans_r=r1*r2,ans_p=p1+p2;
    double a=ans_r*cos(ans_p),b=ans_r*sin(ans_p);
    // ������ ���ʱ���ж� 0 ��Ҫ�÷�Χȥ�ж�
    if(a>-0.005&&a<0.005)a=0.00;
    if(b>-0.005&&b<0.005)b=0.00;

    if(b<0.00)
    {
        printf("%.2f-%.2fi\n",a,-b);
    }
    else 
    {
        printf("%.2f+%.2fi\n",a,b);
    }
}