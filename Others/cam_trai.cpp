#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int N = 1e5 + 7;

ll n,m,a[N];

int main()
{
    cin >> n >> m;
    ll l,r;
    l = r = 0;
    for (int i = 1;i <= n + 1;i++) 
    {
        cin >> a[i];
        r += a[i];
        l = max(l, a[i]);
    }
    ll g,s,cnt,res = LLONG_MAX;
    g = s = cnt = 0;
    while (l <= r)
    {
        g = (l + r) / 2;
        s = 0;
        cnt = 1;
        for (int i = 1;i <= n + 1;i++) if (s + a[i] <= g) s += a[i]; 
        else
        {
            s = a[i];
            cnt++;
        }
        if (cnt <= m)
        {
            res = min(res, g);
            r = g - 1;
        }
        else l = g + 1;
    }
    cout << res;
}