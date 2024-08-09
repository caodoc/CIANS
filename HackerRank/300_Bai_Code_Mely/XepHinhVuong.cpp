#include <bits/stdc++.h>

using namespace std;

int t,n;

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
        int t = sqrt(n);
        double tt = sqrt(n);
        if (t == tt) cout << t << " " << t;
        else
        {
            int temp = INT_MAX;
            int a,b;
            a = b = 0;
            for (int i = 1;i <= sqrt(n);++i)
                if (abs(i - n / i) < temp && i * (n / i) == n)
                {
                    temp = abs(i - n / i);
                    a = min(i, n / i);
                    b = max(i, n / i);
                }
            cout << a << " " << b;
        }
        cout << "\n";
    }
}