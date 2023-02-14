#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

int n,k;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    long long a[n + 1],d[n + 1];
    a[1] = n * 2;
    d[1] = n + n * 2;
    for (int i = 2;i <= k;i++)
    {
        a[i] = (a[i - 1] + d[i - 1]) % MOD;
        d[i] = (a[i] + d[i - 1]) % MOD;
    }
    cout << a[k];
}