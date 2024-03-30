#include <bits/stdc++.h>

using namespace std;

const int N = 3e4 + 7;

int n,ar[N],f[N],res;

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;++i)
    {
        cin >> ar[i];
        f[i] = 1;
    }
    for (int i = 2;i <= n;++i)
    {
        for (int j = 1;j <= i - 1;++j)
        {
			if (f[j] + 1 > f[i] && ar[i] >= ar[j]) f[i] = f[j] + 1;
		    if (f[i] > res) res = f[i];
        }
    }
    cout << n - res;
}