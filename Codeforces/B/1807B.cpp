#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        int ar[n + 1];
        int x,y;
        x = y = 0;
        for (int i = 1;i <= n;++i) cin >> ar[i];
        for (int i = 1;i <= n;++i) 
            if (ar[i] % 2 == 0) x += ar[i];
            else y += ar[i];
        if (x > y) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}