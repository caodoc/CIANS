#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;

int n,ar[N],f[N],res;

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;++i) cin >> ar[i];
    f[1] = 1;
    res = 1;
    for (int i = 2;i <= n;++i)
    {
        int l = 1,r = res,j = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (ar[i] >= ar[f[mid]])
            {
                j = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        if (j == res) f[++res] = i;
        if (ar[i] <= ar[f[j + 1]]) f[j + 1] = i;
    }
    cout << n - res;
}