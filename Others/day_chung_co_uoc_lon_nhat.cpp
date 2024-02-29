#include <bits/stdc++.h>
#pragma GCC optimize("Ofast, unroll-loops")

using namespace std;

const int N = 1e6 + 7;

int n,ar[N],res,f[N],ch[N];
vector<int> s[N];

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
        ch[ar[i]] = 1;
    }
    sort(ar + 1,ar + 1 + n);
    for (int i = 1;i <= ar[n];++i)
        if (ch[i] != 0)
            for (int j = i;j <= ar[n];j += i)
            {
                s[j].push_back(i);
            }
    for (int i = 1;i <= n;++i)
    {
        int temp = 0;
        for (int x : s[ar[i]])
        {
            temp = max(temp, f[x]);
        }
        f[ar[i]] = temp + 1;
        res = max(res, f[ar[i]]);
    }
    cout << n - res;
}