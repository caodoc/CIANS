#include <bits/stdc++.h>

using namespace std;

int t,a,b,c;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a < b && b < c) cout << "STAIR";
        else if (a < b && b > c) cout << "PEAK";
        else cout << "NONE";
        cout << "\n";
    }
}