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
        if (n % 2 != 0) cout << "Lihwy";
        else cout << "FireGhost";
        cout << "\n";
    }
}