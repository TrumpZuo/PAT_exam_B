#include<math.h>
#include<time.h>
#include<iostream>
using namespace std;
#define CLK 100.0
int main()
{
    long long int a,b;
    cin>>a>>b;
    double ans= ((double)b-(double)a)/CLK;

    int temp= round(ans);
    int hour=temp/3600;
    temp%=3600;
    int min=temp/60;
    temp%=60;
    printf("%02d:%02d:%02d\n",hour,min,temp);






}