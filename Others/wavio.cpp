#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 7;

int l,ar[N],f[N],g[N],s[N],maxL,res;

int calc(int i)
{
    int l = 1,r = maxL,j = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (ar[i] > ar[s[mid]])
        {
            j = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    if (j == maxL) s[++maxL] = i;
	if (ar[i] < ar[s[j + 1]]) s[j + 1] = i;
	return j;
}

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> l;
    for (int i = 1;i <= l;++i) cin >> ar[i];
    f[1] = s[1] = maxL = 1;
    for (int i = 2;i <= l;++i)
    {
        int temp = calc(i);
        f[i] = temp + 1;
    }
    g[1] = maxL = 1;
    s[1] = l;
    for (int i = l - 1;i >= 2;--i)
    {
        int temp = calc(i);
        g[i] = temp + 1;
    }
    for (int i = 1;i <= l;++i) res = max(res, min(f[i], g[i]) * 2 - 1);
    cout << res;
}