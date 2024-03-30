#include <bits/stdc++.h>

using namespace std;

int n,m,res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> m >> n;
    long long a[m + 1],b[n + 1],c[m + 1];
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(c, 0, sizeof(c));
    for (int i = 1;i <= m;++i)
    {
        cin >> a[i];
        c[i] = c[i - 1] + a[i];
    }
    for (int i = 1;i <= n;++i) cin >> b[i];
    for (int i = 1;i < m;++i)
        if (a[i] != 0)
            for (int j = 1;j < n;++j)
                if (a[i] == b[j])
                    for (int u = 1;u + i <= m && u + j <= n;++u)
                        if (a[u + i] == b[u + j] && a[u + i] != 0)
                        {
                            if (c[u + i] - c[i - 1] == 0) res++;
                        }
                        else break;
    cout << res;
}