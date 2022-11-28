#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,m,c,a[N],res;
int stmin[N][17],stmax[N][17];

int main()
{
    cin >> n >> m >> c;
    for (int i = 1;i <= n;i++) cin >> a[i];
    for (int i = 1;i <= n;i++)
    {
        stmin[i][0] = a[i];
        stmax[i][0] = a[i];
    }
    for (int j = 1;j <= __lg(n);j++) for (int i = 1;i + (1 << j) <= n;i++)
    {
        stmin[i][j] = min(stmin[i][j - 1], stmin[i + (1 << (j - 1))][j - 1]);
        stmax[i][j] = max(stmax[i][j - 1], stmax[i + (1 << (j - 1))][j - 1]);
    }
    for (int i = 1;i <= n - m + 1;i++)
    {
        long long t1,t2,l,r;
        l = i;
        r = i + m - 1;
        int j = __lg(r - l + 1);
        t1 = max(stmax[l][j], stmax[r - (1 << j) + 1][j]);
        t2 = min(stmin[l][j], stmin[r - (1 << j) + 1][j]);
        if (t1 - t2 == c && i + m - 1 <= n) res++;
    }
    cout << res;
}