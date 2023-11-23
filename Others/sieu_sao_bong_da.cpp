#include <bits/stdc++.h>
#define ll long long int

using namespace std;

const int N = 1e5 + 7;

int n,m;
map<ll, ll> mp;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    ll x;
    int res = 0;
    for (int i = 1;i <= n;++i) 
    {
        cin >> x;
        mp[x] = 1;
    }
    for (int i = 1;i <= m;++i)
    {
        cin >> x;
        if (mp[x] == 1) res++;
    }
    cout << res;
}