#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,m,ar[N],f[N],res;

void qhd()
{
    f[0] = 1;
    for (int i = 1;i <= n;i++)
        for (int j = 1e5;j >= ar[i];j--)
            if (f[j] == 0 && f[j - ar[i]] == 1) f[j] = 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 1;i <= n;i++) cin >> ar[i];
    if (m <= 1e5)
    {
        qhd();
        int x;
        for (int i = 1;i <= m;i++)
        {
            cin >> x;
            if (f[x] == 1) res++;
        }        
    }
    else
    {
        
    }
    cout << res;
}