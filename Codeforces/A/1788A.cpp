#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n + 1];
        for (int i = 1;i <= n;i++) cin >> a[i];
        int ck = 0;
        for (int k = 1;k <= n;k++)
        {
            int t1 = 0, t2 = 0;
            for (int i = 1;i <= k;i++) if (a[i] == 2) t1++;
            for (int i = k + 1;i <= n;i++) if (a[i] == 2) t2++;
            if (t1 == t2) 
            {
                cout << k << endl;
                ck = 1;
                break;
            }
        }
        if (ck == 0) cout << -1 << endl;
    }
}