#include <bits/stdc++.h>

using namespace std;

int t,n,m,k;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        if (n * m - 1 == k) cout << "YES"; else cout << "NO";
        cout << endl;
    }
}