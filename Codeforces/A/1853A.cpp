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
        int ar[n + 1],res = INT_MAX;
        memset(ar, 0, sizeof(ar));
        for (int i = 1;i <= n;++i) cin >> ar[i];
        if (is_sorted(ar + 1, ar + 1 + n) == false)
        {
            cout << "0 \n";
            continue;
        }
        for (int i = 1;i < n;++i)
            res = min(res, (ar[i + 1] - ar[i]) / 2 + 1);
        cout << res << "\n";
    }
}