#include <bits/stdc++.h>

using namespace std;

long long t,n,x;

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long sum = 0;
        for (int i = 1;i <= n;++i)
        {
            cin >> x;
            sum += x;
        }
        int res = sum / n;
        if (res * n != sum)
            if (abs(res * n - sum) >= abs((res + 1) * n - sum)) res++;
        cout << res << "\n";
    }
}