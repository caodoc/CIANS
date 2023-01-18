#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int x,s,chan,le;
        s = chan = le = 0;
        for (int i = 1;i <= n;i++)
        {
            cin >> x;
            s += x;
            if (x % 2 == 0) chan++; else le++;
        }
        if (s % 2 != 0) cout << "YES";
        else if (le != 0 && chan != 0) cout << "YES"; else cout << "NO";
        cout << endl;
    }
}