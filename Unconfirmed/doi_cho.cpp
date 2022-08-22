#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 1;

long long a[N],b[N],n,k,i,c[N];

long long check()
{
    int j,dem = 0;
    swap(c[a[i]], c[b[i]]);
    for (j = 1;j <= n;j++) if (c[j] == 1) dem++;
    return dem;
}

void input()
{
    cin >> n >> k;
    for (i = 1;i <= n;i++) c[i] = 1;
    for (i = 1;i <= k;i++) cin >> a[i] >> b[i];
};

void calc()
{
    for (i = 1;i <= k;i++) cout << check() << endl;
};

int main()
{
    input();
    calc();
}