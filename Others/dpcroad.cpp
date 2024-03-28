#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 7;
const int MOD = 1e9 + 7;

int n,m,ar[N][N],f[N][N];
char ch;

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1;i <= n;++i)
        for (int j = 1;j <= m;++j)
        {
            cin >> ch;
            if (ch != '#') ar[i][j] = 1;
        }
    f[0][1] = 1;
    for (int i = 1;i <= n;++i)
    {
        for (int j = 1;j <= m;++j)
            if (ar[i][j] == 1) f[i][j] = (f[i - 1][j] + f[i][j - 1]) % MOD; 
            else f[i][j] = 0;
    }
    cout << f[n][m];
}