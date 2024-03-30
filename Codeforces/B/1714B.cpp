#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        int ar[n + 7],res = n;
        set<int> s;
        for (int i = 1;i <= n;++i) cin >> ar[i];
        for (int i = n;i >= 1;--i) 
        {
            if (s.count(ar[i])) break;
            res--;
            s.insert(ar[i]);
        }
        cout << res << endl;
    }
}