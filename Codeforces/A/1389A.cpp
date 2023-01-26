#include <bits/stdc++.h>

using namespace std;

int t,a,b;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        long long x, y;
        x = y = 0;
        if (a * 2 <= b)
        {
            x = a;
            y = a * 2;
        }
        else x = y = -1;
        cout << x << " " << y << endl;
    }
}