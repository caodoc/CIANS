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
        int ar[n + 7];
        for (int i = 1;i <= n;++i) cin >> ar[i];
        int res,cnt;
        res = cnt = 0;
        for (int i = 1;i <= n;++i) 
            if (ar[i] == 0) cnt += 1;
            else 
            {
                res = max(res, cnt);
                cnt = 0;
            }
        res = max(res, cnt);
        cout << res << endl;
    }
}