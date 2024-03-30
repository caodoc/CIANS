#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,ar[N],res,f[N];

bool calc(int x)
{
    int a = sqrt(x);
    double b = sqrt(x);
    if (a == b)
    {
        return true;
    }
    return false;
}

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
        for (int j = i - 1;j >= i - 10 && j > 0;--j)
        {
            int temp = abs(ar[i] - ar[j]);
            if (calc(temp) == true && temp > 0)
            {
                f[i] = max(f[i], f[j] + 1);
            }
        }
        if (f[i] != 1) res = max(res, f[i]);
    }
    cout << res;
}