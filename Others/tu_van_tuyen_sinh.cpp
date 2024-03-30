#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,m,t[N];

bool check(long long x)
{
    long long cnt = 0;
    for (int i = 1;i <= n;++i)
    {
        cnt += x / t[i];
        if (cnt >= m) return 1;
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("TUVAN.INP","r",stdin);
    //freopen("TUVAN.OUT","w",stdout);
    cin >> n >> m;
    for (int i = 1;i <= n;++i) cin >> t[i];
    long long l = 1,r = 1e18,m;
    while (r - l > 1)
    {
        m = (l + r) / 2;
        if (check(m)) r = m; 
        else l = m;
    }
    cout << r;
}