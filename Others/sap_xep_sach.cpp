#include <bits/stdc++.h>

using namespace std;

const int N = 1e6;

long long a[N],n,i,j;

int main()
{
    cin >> n;
    long long dem = n;
    for (i = 1;i <= n;i++) cin >> a[i];
    for (i = n;i >= 1;i--) if (a[i] == dem) dem--;
    cout << dem;
}