#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 1;
long long n,k,a[N],i;

int main()
{
    cin >> n >> k;
    for (i = 1;i <= n;i++) cin >> a[i];
    sort(a + 1,a + 1 + n);
    for (i = 0;i < n;i++) if (a[i + 1] - (i + 1) >= k) break;
    cout << k + i;
}