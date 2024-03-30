#include <bits/stdc++.h>

using namespace std;

int t,a,b,c,x,y;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> x >> y;
        if (a - x < 0) c -= x - a;
        if (b - y < 0) c -= y - b;
        if (c >= 0) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}