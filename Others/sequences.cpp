#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,ar[N],g[N],f[N],pos[N],maxR,res;

int calc(int x)
{
    int l = 1,r = maxR, val = 0;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (ar[x] > ar[pos[m]])
        {
            val = m;
            l = m + 1;
        }
        else r = m - 1;
    }
    if (val == maxR) pos[++maxR] = x;
    if (ar[x] < ar[pos[val + 1]]) pos[val + 1] = x;
    return val;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;++i) cin >> ar[i];
    f[1] = g[1] = pos[1] = maxR = 1;
    for (int i = 2;i <= n;++i)
    {
        int var = calc(i);
        f[i] = var + 1;
    }
    pos[1] = n;
    maxR = 1;
    for (int i = n - 1;i >= 1;--i)
    {
        int var = calc(i);
        g[i] = var + 1;
    }
    for (int i = 1;i <= n;++i)
        res = max(res, min(f[i], g[i]) * 2 - 1);
    cout << res;
}