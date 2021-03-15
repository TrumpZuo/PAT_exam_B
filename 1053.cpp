#include<iostream>

using namespace std;
int main()
{
    int N,D;
    double e;
    cin>>N>>e>>D;

    int temp=N,empty=0,possible=0;
    bool isPossible=false;
    while(temp--)
    {
        int day,low=0;
        cin>>day;
        double elc[20]={0.0};
        for(int i=0;i<day;i++)
        {
            cin>>elc[i];
            if(elc[i]<e)low++;

            if(low>day/2)
            {
                if(isPossible==false) possible++;
                isPossible=true;
            }
        }
        if(day>D && isPossible==true )
        {
            possible--;
            empty++;
        }
         isPossible=false;
    }
    // cout<<possible<<" "<<empty;
     printf("%.1lf%% %.1lf%%\n",100.0*(double)possible/(double)N,100.0*(double)empty/(double)N);
        //输出 % 时，使用 %%

}