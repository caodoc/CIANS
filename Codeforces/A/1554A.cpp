#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll temp,res,x;
        temp = res = 0;
        for (ll i = 1;i <= n;i++)
        {
            cin >> x;
            ll t = x * temp;
            res = max(res, t);
            temp = x;
        }
        cout << res << endl;
    }
}