#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 7;

int n,a[N],b[N],f[N][N];

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;++i) cin >> a[i] >> b[i];
    for (int i = 1;i <= n;++i)
        for (int j = 1;j <= n;++j)
        {
            f[i][j] = max(f[i][j - 1], f[i - 1][j]);
            if (a[i] + b[j] >= 0) f[i][j] = max(f[i][j], f[i - 1][j - 1] + 1);
        }
    cout << f[n][n];
}
