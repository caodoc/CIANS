#include <bits/stdc++.h>

using namespace std;

int t,a[5];

int main()
{
    cin >> t;
    while (t--)
    {
        for (int i = 1;i <= 4;i++) cin >> a[i];
        int t1,t2;
        t1 = max(a[1], a[2]);
        t2 = max(a[3], a[4]);
        sort(a + 1,a + 5);
        if ((t1 == a[3] && t2 == a[4]) || (t1 == a[4] && t2 == a[3])) cout << "YES"; else cout << "NO";
        cout << "\n";
    }
}