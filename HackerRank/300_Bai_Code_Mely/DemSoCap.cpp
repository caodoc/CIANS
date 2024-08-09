#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;

int n;
long long x,ar[N],f[N],res;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> x;
    for (int i = 1;i <= n;++i) cin >> ar[i];
    for (int i = 1;i <= n;++i)
        for (int j = i;j <= n;++j)
            if (ar[i] * ar[i] + ar[j] == x) res++;
    cout << res;
}