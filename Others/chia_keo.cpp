#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 7;

int n,ar[N],f[N];
long long res;

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
        res += ar[i];
    }
    long long sum = res / 2;
    while (true)
    {
        memset(f, 0, sizeof(f));
        f[0] = 1;
        for (int i = 1;i <= n;++i)
            for (int j = sum;j >= ar[i];--j)
                if (f[j] == 0 && f[j - ar[i]]) f[j] = 1;
        if (f[sum] == 1)
        {
            cout << abs((abs(res - sum)) - sum);
            break;
        }
        else sum++;
    }
}