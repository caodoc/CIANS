#include <bits/stdc++.h>

using namespace std;

const int N = 6e4 + 7;

int n,t[N],r[N],f[N];

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;++i) cin >> t[i];
    for (int i = 2;i <= n;++i) cin >> r[i];
    f[1] = t[1];
    for (int i = 2;i <= n;++i)
        f[i] = min(f[i - 1] + t[i], f[i - 2] + r[i]);
    cout << f[n];
}