#include <bits/stdc++.h>

using namespace std;

const int N = 107;
const int M = 1e4 + 7;

int n,m,k,ar[N];
long long f[M];

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k;
    for (int i = 1;i <= n;++i) cin >> ar[i];
    f[0] = 1;
    for (int i = 1;i <= n;++i)
        for (int j = m;j >= ar[i];--j)
            if (f[j - ar[i]])
                f[j] = f[j] + f[j - ar[i]];
    if (f[m] >= k) cout << "ENOUGH";
    else cout << f[m];
}