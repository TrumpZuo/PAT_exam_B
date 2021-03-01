//第 1 对相同的大写英文字母
//（大小写有区分）是第 4 个字母 D
//代表星期四
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
// 1.确当周几的字母是A~G，所以遍历字符串的时候，第一个和第二个字符串的相同位置字母不仅一样，还要是A~G内的
// 2.确定小时的字符是在满足1条件的字母的位置（因为两个字符串第一个相同的字符是8，但题目的陈述的是E，这是隐含信息）后面查找，
//范围0~9和A~N以内，字母是看它在字母表中的位置，A的位置为1。



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
        // }//由字母的次序决定 日期
    
    
}

void findTime(string str1,string str2)
{
    int ans=-1;
    for(int i=0;i<str1.size();i++)
    {
        if(str1[i]==str2[i]&&((str1[i]>='A'&&str1[i]<='Z')||(str1[i]>='a'&&str1[i]<='z'))) 
        {
            ans=i;              //读清题目要求！！！
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
//部分正确
/*注意点：1.确当周几的字母是A~G，所以遍历字符串的时候，第一个和第二个字符串的相同位置字母不仅一样，还要是A~G内的
2.确定小时的字符是在满足1条件的字母的位置（因为两个字符串第一个相同的字符是8，但题目的陈述的是E，这是隐含信息）后面查找，范围0~9和A~N以内，字母是看它在字母表中的位置，A的位置为1。
3.两个字符串中相同位置具有相同字母的对数不止两对，所以在确定小时候一定要跳出循环，不然后面还可能又有一对满足2的，这就错误了，有一个测试点的陷阱就在这里。
4.最后两个字符串中确当分钟的是英文字母A~Z 以及a~z，在字符串的相对位置（从零开始计数）。
5.小时或者分钟不满足两位的要记得补零。*/