#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int sub_prime = 0, print_prime = 0;
    int m, n;
    cin >> m >> n;
    int if_print_space = 0;
    for (int i = 2;; i++)
    {
        if (isPrime(i))
        {
            sub_prime++;
            if (sub_prime >= m)
            {
                if (if_print_space == 1)
                {
                    cout << " ";
                }
                cout << i;
                print_prime++;
                if_print_space = 1;
                if (print_prime % 10 == 0)
                {
                    cout << "\n";
                    if_print_space = 0;
                }
            }
            if (sub_prime == n)
            {
                break;
            }
        }
    }
    return 0;
}
