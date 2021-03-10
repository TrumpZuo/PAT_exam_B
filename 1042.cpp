#include<bits/stdc++.h>

using namespace std;
int main()
{
    char c;
    int cnt[26]={0};
    do
    {
        c=cin.get();
        if((c>='a'&&c<='z')||(c<='Z'&&c>='A'))
        {
            c=tolower(c);
            int sub= c-'a';
            cnt[sub]++;
        }
    } while (c!='\n');

    int max=0;
    for(int i=0;i<26;i++)
    {
        if(cnt[i]>cnt[max])max=i;
        else if(cnt[i]==cnt[max])
        {
            if(i<max) max=i;
        }
    }
    c='a'+max;
    cout<<c<<" "<<cnt[max]<<endl;
    
    
}