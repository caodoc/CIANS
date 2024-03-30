#include <bits/stdc++.h>

using namespace std;

int t,a,b,c;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a - b == c) cout << "-";
        else cout << "+";
        cout << endl;
    }
}