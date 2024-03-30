#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int N = 1e3 + 7;

ll n,p,l,w[N];
double v[N],f[N],TT,Time;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("DOANXE.INP","r",stdin);
    //freopen("DOANXE.OUT","w",stdout);
    cin >> n >> p >> l;
    for (int i = 1;i <= n;++i)
    {
        cin >> w[i] >> v[i];
        w[i] += w[i - 1];
        v[i] = l / v[i];
    }
    //for (int i = 1;i <= n;++i) cout << i << " - " << w[i] << " " << v[i] << "\n";
    //cout << "-----\n";
    f[1] = v[1];
    for (int i = 2;i <= n;++i)
    {
        Time = max(Time, v[i]);
        f[i] = f[i - 1] + v[i];
        for (int j = i - 1;j >= 1;--j)
        {
            Time = max(Time, v[j]);
            if (w[i] - w[j - 1] <= p) f[i] = min(f[i], f[j - 1] + Time);
        }
        Time = -999;
    }
    //for (int i = 1;i <= n;++i) cout << f[i] << "\n";
    cout << setprecision(2) << fixed << f[n];
}