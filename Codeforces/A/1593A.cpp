#include <bits/stdc++.h>

using namespace std;

int t,a,b,c;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        cout << max(0, max(b, c) + 1 - a) << " " << max(0, max(a, c) + 1 - b ) << " " << max(0, max(a, b) + 1 - c) << endl;
    }
}