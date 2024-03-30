#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n + 1],res = -1;
        for (int i = 1;i <= n;i++) cin >> a[i];
        sort(a + 1,a + 1 + n);
        for (int i = 1;i <= n - 2;i++) if (a[i] == a[i + 1] && a[i] == a[i + 2])
        {
            res = a[i];
            break;
        }
        cout << res << endl;
    }
}