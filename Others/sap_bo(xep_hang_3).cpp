#include <bits/stdc++.h>

using namespace std;

const int N = 1e4 + 7;
const int MOD = 1e6;

int n,k,f[N];

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1;i < k + 2;++i) f[i] = (i + 1) % MOD;
    for (int i = k + 2;i <= n;++i) f[i] = (f[i - k - 1] % MOD + f[i - 1] % MOD) % MOD;
    cout << f[n];
}