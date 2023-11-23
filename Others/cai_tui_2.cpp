#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

long long n,f[105][N],m,w[105],v[105],a[105];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1;i <= n;++i) cin >> w[i] >> v[i] >> a[i];
    for (int i = 1;i <= n;++i)
        for (int j = 1;j <= m;++j)
        {
            f[i][j] = f[i - 1][j];
            for (int k = a[i];k >= 1;--k)
                if (k * w[i] <= j)
                    f[i][j] = max(f[i][j], f[i - 1][j - k * w[i]] + k * v[i]);
        }
    cout << f[n][m];
}
