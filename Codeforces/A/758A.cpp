#include <bits/stdc++.h>

using namespace std;

int n,a[110];

int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++) cin >> a[i];
    int res = 0;
    sort(a + 1,a + 1 + n);
    int t = a[n];
    for (int i = 1;i <= n - 1;i++) res += abs(t - a[i]);
    cout << res;
}