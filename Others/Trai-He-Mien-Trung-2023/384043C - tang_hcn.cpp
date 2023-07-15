#include<bits/stdc++.h>

using namespace std;

const long long N = 1e3 + 7;

long long n,m,l,r,x,y,v,f[N][N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    while (m--)
    {
        cin >> l >> r >> x >> y >> v;
        f[l][r] += v;
        f[l][y + 1] -= v;
        f[x + 1][y + 1] += v;
        f[x + 1][r] -= v;
    }
    for (int i = 1;i <= n;++i)
    {
        for (int j = 1;j <= n;++j)
        {
            f[i][j] += f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1];
            cout << f[i][j] << " ";
        }
        cout << "\n";
    }
}