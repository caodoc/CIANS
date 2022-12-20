#include <bits/stdc++.h>

using namespace std;

const int N = 1e6;

long long a[N],n,i,x;

int main()
{
    cin >> n;
    for (i = 1;i <= n;i++) cin >> a[i];
    sort(a + 1,a + 1 + n);
    x = abs(a[n] - a[1]);
    cout << x;
}