#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;
const int MOD = 14062008;

int n,k,ar[N],f[N];

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    int x;
    for (int i = 1;i <= k;++i)
    {
        cin >> x;
        ar[x] = 1;
    }
    f[1] = 1;
    for (int i = 2;i <= n;++i)
        if (ar[i] == 0)
            f[i] = (f[i - 1] + f[i - 2]) % MOD;
    cout << f[n];
}