#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n,a,b;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    a = b = 0;
    for (int i = 1;i <= n;i++)
    {
        cin >> a >> b;
        int res = 0;
        if (a == b) cout << 0 << endl;
        else
        {
            ll t1 = max(a, b);
            ll t2 = min(a, b);
            res = round((t1 - t2) / 10);
            //cout << t1 << " " << t2 << endl;
            if (t1 - res * 10 > t2) res++;
            cout << res << endl;
        }
    }
}