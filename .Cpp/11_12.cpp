#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a = 2,n,k,s;

ll calc(ll a, ll b)
{
    if (b == 0) return 1;
    ll tmp = calc(b, b / 2);
    tmp = (tmp * tmp) % k;
    if (b % 2 == 1) tmp = (tmp * a) % k;
    return tmp;
}

int main()
{
    cin >> n >> k;
    for (int i = 1;i <= n;i++) s = (s + (i * calc(a,i - 1)) % k) % k;
    cout << s;
}
