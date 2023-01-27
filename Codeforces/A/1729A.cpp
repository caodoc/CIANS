#include <bits/stdc++.h>

using namespace std;

int t,a,b,c;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        int x = a - 1;
        int y = abs(b - c) + abs(c - 1);
        if (x < y) cout << 1;
        else if (x > y) cout << 2;
        else cout << 3;
        cout << endl;
    }
}