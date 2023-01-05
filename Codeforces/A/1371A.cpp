#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int res = n / 2;
        if (n % 2 == 1) res++;
        cout << res << endl;
    }
}