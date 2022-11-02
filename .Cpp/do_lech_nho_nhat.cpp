#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;

int n,m,a[N],b[N],t1,t2,res;

int main()
{
    //freopen("dolech.inp","r",stdin);
    //freopen("dolech.out","w",stdout);
    cin >> n >> m;
    for (int i = 1;i <= n;i++) cin >> a[i];
    for (int i = 1;i <= m;i++) cin >> b[i];
    sort(b + 1,b + 1 + m);
    res = INT_MAX;
    for (int i = 1;i <= n;i++)
    {
        t1 = lower_bound(b + 1,b + 1 + m,a[i]) - b;
        if (t1 <= n) res = min(res, abs(b[t1] - a[i]));
        if (t1 > 1) res = min(res, abs(b[t1 - 1] - a[i]));
        //cout << i << " " << t1 << " " << res << endl;
    }
    cout << res;
}
