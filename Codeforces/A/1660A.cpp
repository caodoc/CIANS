#include <bits/stdc++.h>

using namespace std;

int t,a,b;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a == 0) cout << 1;
        else cout << a + b * 2 + 1;
        cout << endl;
    }
}