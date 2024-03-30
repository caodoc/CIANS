#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n + 1],b[n + 1];
        int amax,bmax,x,y;
        x = y = 0;
        amax = bmax = -1;
        for (int i = 1;i <= n;i++) cin >> a[i];
        for (int i = 1;i <= n;i++) cin >> b[i];
        for (int i = 1;i <= n;i++)
        {
            x = min(a[i], b[i]);
            y = max(a[i], b[i]);
            amax = max(amax, x);
            bmax = max(bmax, y);
        }
        cout << amax * bmax << endl;
    }
}