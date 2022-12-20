#include <bits/stdc++.h>

using namespace std;

long long n,x[30];

void xuat()
{
    for (int k = 1;k <= n;k++) cout << x[k];
    cout << endl;
}

void truy(long long i)
{
    for (int j = 0;j <= 1;j++)
    {
        x[i] = j;
        if (i == n) xuat(); else truy(i + 1);
    }
}

int main()
{
    cin >> n;
    truy(1);
}