#include <bits/stdc++.h>

using namespace std;

const int N = 1e2 + 7;

int n,m,k,ar[N],res = INT_MAX,x;

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k;
    for (int i = 1;i <= n;++i)
    {
        cin >> x;
        if (x != 0 && x <= k) res = min(res, abs(m - i) * 10);
    }
    if (res == INT_MAX) cout << -1;
    else cout << res;
}