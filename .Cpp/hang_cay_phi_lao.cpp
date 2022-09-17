#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 1;

long long a[N],n,m,i,tong;

long long calc(long long c)
{
    long long i,d = 0,g,s,kq = -1;
    while (d <= c)
    {
        g = (d + c) / 2;
        s = 0;
        for (i = 1;i <= n;i++) if (a[i] >= g) s += a[i] - g;
        if (s >= m)
        {
            kq = g;
            d = g + 1;
        }
        else c = g - 1;
    }
    return kq;
}

int main()
{
    cin >> n >> m;
    for (i = 1;i <= n;i++) cin >> a[i];
    sort(a + 1,a + 1 + n);
    for (i = 2;i <= n;i++) tong += a[i] - a[1];
    cout << tong << endl << calc(a[n]);
}