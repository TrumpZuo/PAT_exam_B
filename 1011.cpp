#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    long long int A = 0, B = 0, C = 0;
    int cnt = 0;
    while (T--)
    {
        cnt++;
        cin >> A >> B >> C;
        if (A + B > C)
            cout << "Case #" << cnt << ": true" << endl;
        else
            cout << "Case #" << cnt << ": false" << endl;
    }
    return 0;
}