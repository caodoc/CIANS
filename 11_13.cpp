#include <bits/stdc++.h>
#define ll long long

using namespace std;

const long long mod = 1e9 + 7;

ll a,n;

ll calc(ll x, ll y)
{
    if (y == 0) return 1;
    ll tmp = calc(x,y / 2);
    tmp = (tmp * tmp) % mod;
    if (y % 2 == 1) tmp = (tmp * x) % mod;
    return tmp;
}

int main()
{
    cin >> a >> n;
    cout << ((calc(a, n + 1) - 1) * calc(a - 1, mod - 2)) % mod;
}
