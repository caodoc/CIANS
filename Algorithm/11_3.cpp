#include <bits/stdc++.h>

using namespace std;

long long n,x[30],d[30];

void xuat()
{
    for (int k = 1;k <= n;k++) cout << x[k];
    cout << endl;
}

void truy(long long i)
{
    for (int j = 0;j <= 2;j++) if (d[j] == 0)
    {
        x[i] = j;
        d[j] = 1;
        if (i == n) xuat(); else truy(i + 1);
        d[j] = 0;
    }
}

int main()
{
    cin >> n;
    truy(1);
}