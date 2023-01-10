#include <bits/stdc++.h>

using namespace std;

int t,n,m;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        if (n == 1) cout << 0;
        else if (n == 2) cout << m;
        else cout << m * 2;
        cout << "\n";
    }
}