#include <bits/stdc++.h>

using namespace std;

int t,a,b,c,d;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("GNUM.INP","r",stdin);
    //freopen("GNUM.OUT","w",stdout);
    cin >> t;
    while (t--)
    {
        int ar[5];
        memset(ar, 0, sizeof(ar));
        //cin >> a >> b >> c >> d;
        for (int i = 1;i <= 4;++i) cin >> ar[i];
        sort(ar + 1,ar + 5);
        a = ar[1];
        b = ar[2];
        c = ar[3];
        d = ar[4];
        if (d - c == b)
        {
            cout << b << " " << c << "\n";
            continue;
        }
        if (d - c == a)
        {
            cout << a << " " << c << "\n";
            continue;
        }
        if (d - b == a)
        {
            cout << a << " " << b << "\n";
            continue;
        }
    }
}
