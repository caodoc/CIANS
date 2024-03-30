#include <bits/stdc++.h>

using namespace std;

int t,a[4],n;

int main()
{
    cin >> t;
    while (t--)
    {
        for (int i = 1;i <= 3;i++) cin >> a[i];
        cin >> n;
        sort(a + 1,a + 4);
        int t = a[3] * 2 - a[1] - a[2];
        if (n >= t)
        {
            if ((n - t) % 3 == 0) cout << "YES"; else cout << "NO";
        }
        else cout << "NO";
        cout << "\n";
    }
}