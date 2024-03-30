#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n + 1] = {0};
        for (int i = 1;i <= n;i++) cin >> a[i];
        sort(a + 1,a + 1 + n);
        int res = INT_MAX;
        for(int i = 1;i < n;i++) res = min(res, a[i + 1] - a[i]);
        cout << res << endl;
    }
}