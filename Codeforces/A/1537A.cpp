#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n + 1];
        int s = 0;
        for (int i = 1;i <= n;i++) 
        {
            cin >> a[i];
            s += a[i];
        }
        if (s >= n) cout << s - n; else cout << 1;
        cout << endl;
    }
}