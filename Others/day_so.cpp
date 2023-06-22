#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 5;

int n,ar[N],f[N],g[N],res,b[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("SWEIGHT.INP","r",stdin);
	//freopen("SWEIGHT.OUT","w",stdout);
    cin >> n;
    for (int i = 1;i <= n;++i) 
    {
        cin >> ar[i];
        if (ar[i] > ar[i - 1])
            f[i] = f[i - 1] + 1;
        else f[i] = 1;
    }
    for (int i = n;i >= 1;--i)
        if (ar[i + 1] > ar[i])
            g[i] = g[i + 1] + 1;
        else g[i] = 1;
    /*
    cout << "f ";
    for (int i = 1;i <= n;++i) cout << f[i] << " ";
    cout << "\n";
    cout << "g ";
    for (int i = 1;i <= n;++i) cout << g[i] << " ";
    cout << "\n";
    */
    /*
    res = f[1];
    for (int i = n;i >= 1;--i)
        for (int j = i + 1;j <= n;++j)
            if (ar[j] > ar[i])
                res = max(res, f[i] + g[j]);
    cout << res;
    */
    res = 1;
    int d = 0;
    for (int i = n;i >= 1;--i)
    {
        for (int j = d;j >= 1;--j)
            if (b[j] > ar[i]) 
            {
                res = max(res,f[i] + j);
                break;
            }
        b[g[i]] = max(b[g[i]], ar[i]);
        d = max(d, g[i]);
    }
    cout << res;
}