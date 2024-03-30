#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

long long n,a[N],p[N],f[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("FEEDING.INP","r",stdin);
    //freopen("FEEDING.OUT","w",stdout);
    cin >> n;
    for (int i = 1;i <= n;++i) cin >> a[i];
    f[0] = 0;
    p[0] = INT_MAX;
    int x = 0;
    for (int i = 1;i <= n;++i)
    {
        cin >> p[i];
        if (p[x] < p[i])
            f[i] = f[i - 1] + a[i] * p[x];
        else
        {
            f[i] = f[i - 1] + a[i] * p[i];
            x = i;
        }
    }
    cout << f[n];
}