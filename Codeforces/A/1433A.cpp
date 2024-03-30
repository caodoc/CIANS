#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int res = 0;
        int tmp = n % 10;
        if (n / 1000 % 10 != 0)
        {
            cout << tmp * 10;
        }
        else if (n / 100 % 10 != 0)
        {
            cout << tmp * 10 - 4;
        }
        else if (n / 10 % 10 != 0)
        {
            cout << tmp * 10 - 7;
        }
        else cout << tmp * 10 - 9;
        cout << endl;
    }
}