#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

long long n,m,ar[N],l,r,v,f[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1;i <= m;++i)
    {
        cin >> l >> r >> v;
        f[l] += v;
        f[r + 1] -= v;
    }
    for (int i = 1;i <= n;++i)
    {
        ar[i] += ar[i - 1] + f[i];
        cout << ar[i] << " ";
    }
}