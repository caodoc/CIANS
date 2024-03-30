#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;
long long n,m,f[N],t[N],w[N],v[N];

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1;i <= n;++i) cin >> w[i] >> v[i];
    for (int i = 1;i <= n;++i)
    {
        for (int j = 1;j <= m;++j)
        {
            f[j] = t[j];
            if (w[i] <= j) f[j] = max(f[j], t[j - w[i]] + v[i]);
        }
        for (int j = 1;j <= m;++j) t[j] = f[j];
    }
    cout << f[m];
}