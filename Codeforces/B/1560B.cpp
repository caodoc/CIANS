#include <bits/stdc++.h>

using namespace std;

int t,a,b,c;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        int t1,t2;
        t1 = t2 = 0;
        t1 = max(a, b) - min(a, b);
        t2 = t1 * 2;
        if (a > t2 || b > t2 || c > t2) cout << -1 << endl;
        else
        {
            if (c + t1 <= t2) cout << c + t1 << endl;
            else if (c - t1 <= t2 && c - t1 > 0) cout << c - t1 << endl; else cout << -1 << endl;
        }
    }
}