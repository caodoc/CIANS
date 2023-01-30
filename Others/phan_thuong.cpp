#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int N = 1e3 + 7;

ll n,a[N],tr[N],f[N];

void qhd()
{
    ll res = 0;
    for (int i = 1;i <= n;i++)
    {
        ll jmax = 0;
        for (int j = 0;j <= i - 1;j++) if (a[i] > a[j] && f[j] > jmax) jmax = f[j];
        f[i] = jmax + a[i];
        res = max(res, f[i]);
    }
    cout << res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;i++) cin >> a[i];
    qhd();
}