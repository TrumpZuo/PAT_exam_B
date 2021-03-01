#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int num)
{
    bool ans = true;
    if (num <= 1)
        ans = false;
    else
    {
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                ans = false;
                break;
            }
        }
    }
    return ans;
}
int main()
{
    int sub_prime = 0;
    int cnt_prime = 0;
    int m, n, sum = 0, num = 2;
    cin >> m >> n;

    bool print_space = false;

    while (sub_prime <= n)
    {
        if (isPrime(num) == true)
        {
            sub_prime++;
            // if(print_space==true )cout<<" ";

            if (sub_prime >= m && sub_prime <= n) //可能需要打印空格
            {
                cout << num;
                print_space = true;
                cnt_prime++;
            }

            if ((cnt_prime % 10 == 0 && cnt_prime != 0) || sub_prime == n)
            {
                cout << "\n";
                print_space = false;
            }

            if (print_space == true)
            {
                cout << " ";
                print_space = false;
            }
            // if(sub_prime>=m && sub_prime<n )
            // {cout<<num<<" "; cnt_prime++;}
            // else if(sub_prime==n || cnt_prime%10==0)
            // {cout<<num<<endl; cnt_prime++;}
            //问题： cnt_prime==0,0%10==0;
        }
        num++;
    }
    return 0;
}//测试点二 格式错误