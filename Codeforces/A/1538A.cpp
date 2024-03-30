#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n + 1],tmax,tmin,pmax,pmin,res;
        tmax = pmax = pmin = res = 0;
        tmin = INT_MAX;
        for (int i = 1;i <= n;i++)
        {
            cin >> a[i];
            if (tmax < a[i])
            {
                tmax = a[i];
                pmax = i;
            }
            if (tmin > a[i])
            {
                tmin = a[i];
                pmin = i;
            }
        }
        if (pmin > pmax) swap(pmax, pmin);
        int t1 = n - pmin + 1;
        int t2 = n - pmax + pmin + 1;
        res = min(pmax, min(t1, t2));
        cout << res << endl;
    }
}