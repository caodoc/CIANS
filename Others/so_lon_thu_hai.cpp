#include <bits/stdc++.h>

using namespace std;

int main()
{
    const int N = 1e6;
    long long a[N],n,i;
    cin >> n;
    for (i = 1;i <= n;i++) cin >> a[i];
    sort(a + 1,a + 1 + n);
    cout << a[n - 1];
    return 0;
}