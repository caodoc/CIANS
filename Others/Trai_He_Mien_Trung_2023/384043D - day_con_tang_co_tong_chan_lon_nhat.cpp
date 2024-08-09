#include<bits/stdc++.h>

using namespace std;

const long long N = 1e6 + 7;

long long n,ar[N],f[N],l,r,res;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    l = N;
    r = 0;
    res = -N;
    for (int i = 1;i <= n;++i)
    {
        cin >> ar[i];
        f[i] = f[i - 1] + ar[i];
        if (f[i] % 2 == 0)
        {
            res = max(res, f[i] - r);
            r = min(r, f[i]);
        }
        else
        {
            if (l != N) res = max(res, f[i] - l);
            l = min(l, f[i]);
        }
    }
    if (res != -N) cout << res;
    else cout << "NOT_FOUND";
}
