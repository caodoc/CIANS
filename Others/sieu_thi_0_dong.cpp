#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 7;
const int M = 1e5 + 7;

int n,w,f[2][M],a[N],b[N];

int main()
{
    cin >> n >> w;
    int tmp = 0;
    for (int i = 1;i <= n;i++) cin >> a[i] >> b[i];
    for (int i = 1;i <= n;i++)
    {
        tmp = 1 - tmp;
        for (int j = 0;j <= w;j++)
        {
            f[tmp][j] = f[1 - tmp][j];
            if (j >= a[i]) f[tmp][j] = max(f[tmp][j], f[tmp][j - a[i]] + b[i]);
        }
    }
    cout << f[tmp][w];
}