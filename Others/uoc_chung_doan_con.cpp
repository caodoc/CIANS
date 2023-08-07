#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;
const int K = 23;

int t,n,f[K][N];

int get(int l, int r)
{
    int j =  __lg(r - l + 1);
    return __gcd(f[j][l], f[j][r - (1 << j) + 1]);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("CDSUBSEG.INP","r",stdin);
    //freopen("CDSUBSEG.OUT","w",stdout);
    cin >> t;
    while (t--)
    {
        int res = 0;
        cin >> n;
        for (int i = 1;i <= n;++i)
        {
            cin >> f[0][i];
            f[0][i] = abs(f[0][i]);
        }
        for (int j = 1;j <= K;++j)
            for (int i = 1;i + (1 << j) - 1 <= n;++i)
                f[j][i] = __gcd(f[j - 1][i], f[j - 1][i + (1 << j - 1)]);
        for (int i = 1; i <= n; i++)
            if (f[0][i] != 1)
            {
                int l = i, r = n + 1;
                while (r - l > 1)
                {
                    int mid = l + r >> 1;
                    if (get(i, mid) != 1)
                    l = mid; else r = mid;
                }
                res = max(res, l - i + 1);
            }
        cout << res << "\n";
    }
}