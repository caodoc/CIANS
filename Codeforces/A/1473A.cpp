#include <bits/stdc++.h>

using namespace std;

int t,n,d;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> d;
        int a[n + 1];
        for (int i = 1;i <= n;i++) cin >> a[i];
        sort(a + 1,a + 1 + n);
        int ck = 0;
        for (int i = 2;i < n;i++) if (a[i] + a[i - 1] <= d)
        {
            ck = 1;
            break;
        }
        if (a[n] <= d || ck == 1) cout << "YES"; else cout << "NO";
        cout << endl;
    }
}