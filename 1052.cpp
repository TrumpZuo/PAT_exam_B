#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string>shou,yan,kou;

void process()
{
    string str;
    for(int i=0;i<3;i++)
    {
        vector<string>input;
        getline(cin,str);
        for(int j=0;j<str.size();j++)
        {
            if(str[j]=='[')
            {
                int k=j;
                while(str[k]!=']')k++;
                input.push_back(str.substr(j+1,k-j-1));            
             j=k;
            }
        }
        if(i==0) shou=input;
        else if(i==1) yan=input;
        else kou=input;      
    }
}

using namespace std;
int main()
{
    process();
    // cout<<kou[3]<<" "<<kou[4];


    int n;
    cin >> n;
    for(int i = 0; i < n; i++) 
    {
        //借鉴写法，不使用数组，五个变量分别进行判断
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        if(a > shou.size() || b > yan.size() || c > kou.size() || d > yan.size() || e > shou.size() || a < 1 || b < 1 || c < 1 || d < 1 || e < 1) {
            cout << "Are you kidding me? @\\/@" << endl;
            continue;
        }
        cout << shou[a-1] << "(" << yan[b-1] << kou[c-1] << yan[d-1] << ")" << shou[e-1] << endl;
    }
    return 0;
    
}

       
