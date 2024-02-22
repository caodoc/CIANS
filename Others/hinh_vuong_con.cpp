#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 7;

int n,k;
long long ar[N][N],res;

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    int x = 0;
    for (int i = 1;i <= n;++i)
        for (int j = 1;j <= n;++j)
        {
            cin >> x;
            ar[i][j] = ar[i - 1][j] + ar[i][j - 1] - ar[i - 1][j - 1] + x;
        }
    /*for (int i = 1;i <= n;++i)
    {
        for (int j = 1;j <= n;++j) cout << ar[i][j] << " ";
        cout << "\n";
    }*/
    for (int i = k;i <= n;++i)
        for (int j = k;j <= n;++j)
        {
            res = max(res, ar[i][j] - ar[i - k][j] - ar[i][j - k] + ar[i - k][j - k]);
        }
    cout << res;
}