#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,a[N],res = 0;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;i++) cin >> a[i];
    sort(a + 1,a + 1 + n);
    for (int i = 1;i <= n;i++) if (res <= a[i]) res++;
    cout << res;
}