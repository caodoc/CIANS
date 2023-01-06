#include <bits/stdc++.h>

using namespace std;

int t,a,b,c;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a + b == c || b + c == a || c + a == b) cout << "YES"; else cout << "NO";
        cout << "\n";
    }
}