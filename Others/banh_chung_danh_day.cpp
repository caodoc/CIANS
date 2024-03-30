#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int m,n,a[N],b[N];
long long res;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("PRESENT.INP","r",stdin);
    //freopen("PRESENT.OUT","w",stdout);
    cin >> m >> n;
    for (int i = 1;i <= m;++i) cin >> a[i];
    for (int i = 1;i <= n;++i) cin >> b[i];
    sort(a + 1,a + 1 + m);
    sort(b + 1,b + 1 + n);
    int i,j;
    i = j = 0;
    for (i = 1;i <= m;++i)
    {
        while (j <= n && b[j] <= a[i]) ++j;
        res += j - 1;
    }
    i = j = 0;
    for (j = 1;j <= n;++j)
    {
        while (i <= m && 2LL * a[i] * a[i] <= 1LL * b[j] * b[j]) ++i;
        res += i - 1;
    }
    cout << res;
}