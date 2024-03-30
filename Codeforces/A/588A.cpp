#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,a[N],p[N],pos;
long long f[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;++i) cin >> a[i] >> p[i];
    p[0] = INT_MAX;
    f[0] = 0;
    for (int i = 1;i <= n;++i)
    {
        if (p[pos] < p[i]) f[i] = f[i - 1] + a[i] * p[pos];
        else
        {
            f[i] = f[i - 1] + a[i] * p[i];
            pos = i;
        }
    }
    cout << f[n];
}