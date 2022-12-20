#include <bits/stdc++.h>

using namespace std;

long long k,n,x[30],d[30];

void xuat()
{
    for (int u = 1;u <= k;u++) cout << x[u] << " ";
    cout << endl;
}

void truy(long long i)
{
    for (int j = x[i - 1] + 1;j <= n - k + i;j++) if (d[j] == 0)
    {
        x[i] = j;
        d[j] = 1;
        if (i == k) xuat(); else truy(i + 1);
        d[j] = 0;
    }
}

int main()
{
    cin >> k >> n;
    truy(1);
}