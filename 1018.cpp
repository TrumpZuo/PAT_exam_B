#include<map>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string game;
    cin.get();
    map<char,int> jia,yi;
    int jia_win=0,yi_win=0,ping=0,cnt=n;
    
    while(cnt--)
    {
        getline(cin,game);
        // cin.get();
        if( (game[0]=='C'&&game[2]=='J')||
            (game[0]=='J'&&game[2]=='B')||
            (game[0]=='B'&&game[2]=='C')
          )
        {
            jia_win++;
            jia[game[0]]++;
        }
        else 
        if( (game[0]=='C'&&game[2]=='B')||
            (game[0]=='J'&&game[2]=='C')||
            (game[0]=='B'&&game[2]=='J')
          )
        {
            yi_win++;
            yi[game[2]]++;
        }
        else ping++;
    }

    cout<<jia_win<<" "<<ping<<" "<<n-jia_win-ping<<endl;
    cout<<yi_win<<" "<<ping<< " "<<n-yi_win-ping<<endl;
    char ans_jia,ans_yi;
    ans_jia=(jia['B']>=jia['C']?(jia['B']>=jia['J']?'B':'J'):(jia['C']>=jia['J']?'C':'J'));
    ans_yi=(yi['B']>=yi['C']?(yi['B']>=yi['J']?'B':'J'):(yi['C']>=yi['J']?'C':'J'));
    cout<<ans_jia<<" "<<ans_yi<<endl;
    
    return 0;



}