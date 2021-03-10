#include<bits/stdc++.h>
using namespace std;

int main()
{
    string test,target;
    cin>>test>>target;
    bool isBuy=true;
    int sum=test.size();
    int cnt_right=0,cnt_wrong=0;

    for(int i=0;i<target.size();i++)
    {
        int k=0;
        for(string::iterator j=test.begin();j!=test.end();j++,k++)
        {
            if(target[i]==*j)
            {
                cnt_right++;
                test.erase(k,1);
                break;
            }
            if(j+1==test.end())
            {
                isBuy=false;
                cnt_wrong++;
            }
        }
    }

     if(isBuy==true)  
        {
            cout<<"Yes "<<sum-cnt_right;
        }  
        else
        {
            cout<<"No "<<cnt_wrong;
        }


}