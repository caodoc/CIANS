#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,k,h[N],f[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1;i <= n;++i) cin >> h[i];
    f[1] = 0;
    for (int i = 2;i <= n;++i)
    {
        f[i] = 1e9;
        for (int j = 1;j <= k;++j)
            if (i - j >= 1) 
                f[i] = min(f[i], f[i - j] + abs(h[i] - h[i - j]));
    }
    cout << f[n];
}