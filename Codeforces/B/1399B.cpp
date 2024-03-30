#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll t,n;

int main()
{
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a[n + 1],b[n + 1];
        ll amin,bmin,c,m;
        amin = bmin = INT_MAX;
        c = m = 0;
        for (int i = 1;i <= n;i++) 
        {
            cin >> a[i];
            amin = min(amin, a[i]);
        }
        for (int i = 1;i <= n;i++) 
        {
            cin >> b[i];
            bmin = min(bmin, b[i]);
        }
        for (int i = 1;i <= n;i++) 
        {
            if (a[i] > amin && b[i] > bmin)
            {
                m = min(a[i],b[i]);
                a[i] = a[i] - (m - min(amin, bmin));
                b[i] = b[i] - (m - min(amin, bmin));
                c += (m - min(amin, bmin));
                if (a[i] > amin)
                {
                    c += a[i] - amin;
                    a[i] -= a[i] - amin;
                }
                else if (b[i] > bmin)
                {
                    c += b[i] - bmin;
                    b[i] -= b[i] - bmin;
                }
            }
            else if (a[i] == amin && b[i] > bmin)
            {
                c += b[i] - bmin;
                b[i] -= b[i] - bmin;
            }
            else if (a[i] > amin && b[i] == bmin)
            {
                c += a[i] - amin;
                a[i] -= a[i] - amin;
            }
        }
        cout << c << endl;
    }
}