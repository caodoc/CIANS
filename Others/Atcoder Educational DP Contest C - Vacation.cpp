#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,a[N],b[N],c[N];
long long f[N][4];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 1;i <= n;++i) 
    {
        cin >> a[i];
        cin >> b[i];
        cin >> c[i];
    }
    f[1][1] = a[1];
    f[1][2] = b[1];
    f[1][3] = c[1];
    for (int i = 2;i <= n;++i)
    {
        f[i][1] = a[i] + max(f[i - 1][2], f[i - 1][3]);
        f[i][2] = b[i] + max(f[i - 1][1], f[i - 1][3]);
        f[i][3] = c[i] + max(f[i - 1][1], f[i - 1][2]);
    }
    cout << max(f[n][1], max(f[n][2], f[n][3]));
}