#include <bits/stdc++.h>

using namespace std;

long long k,n,x[30],d[30],t[30],dem;

void xuat()
{
    dem++;
    for (int u = 1;u <= k;u++) cout << x[t[u]] << " ";
    cout << endl;
}

void truy(long long i)
{
    for (int j = 1;j <= n;j++) if (d[j] == 0)
    {
        t[i] = j;
        d[j] = 1;
        if (i == n) xuat(); else truy(i + 1);
        d[j] = 0;
    }
}

int main()
{
    cin >> k >> n;
    for (int i = 1;i <= n;i++) cin >> x[i];
    sort(x + 1,x + 1 + n);
    truy(1);
    cout << dem;
}