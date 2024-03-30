#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int N = 1e5 + 7;

int n;
ll ar[N],pos[N],f[N],s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("BAI4.INP","r",stdin);
    //freopen("BAI4.OUT","w",stdout);
    cin >> n;
    for (int i = 1;i <= n;++i)
    {
        cin >> ar[i];
        ar[i] += ar[i - 1];
    }
    for (int i = 1;i <= n;++i)
    {
        s = ar[i];
        for (int j = i;j >= 1;--j)
        {
            if (ar[i] - ar[j - 1] >= ar[j - 1] - ar[pos[j - 1] - 1])
            {
                f[i] = max(f[i], f[j - 1] + 1);
                if (ar[i] - ar[j - 1] <= s)
                {
                    s = ar[i] - ar[j - 1];
                    pos[i] = j;
                }
            }
        }
    }
    cout << f[n];
}