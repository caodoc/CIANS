#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n < 1400) cout << "Division 4";
        if (n >= 1400 && n < 1600) cout << "Division 3";
        if (n >= 1600 && n < 1900) cout << "Division 2";
        if (n >= 1900) cout << "Division 1";
        cout << endl;
    }
}