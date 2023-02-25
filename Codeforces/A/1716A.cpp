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
        if (n == 1) res = 2;
        else if (n % 3 == 0) res = n / 3;
        else res = n / 3 + 1;
        cout << res << endl;
    }
}