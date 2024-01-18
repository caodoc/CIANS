#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 7;
const int MOD = 1e9 + 7;

long long n,s,ar[N],f[N];

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> s;
    for (int i = 1;i <= n;++i) cin >> ar[i];
    f[0] = 1;
    for (int i = 1;i <= n;++i)
        for (int j = s;j >= ar[i];--j)
            if (f[j - ar[i]]) f[j] = (f[j] + f[j - ar[i]]) % MOD;
    cout << f[s];
}