#include <bits/stdc++.h>

using namespace std;

int t;

int main()
{
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] + s[1] + s[2] == s[3] +  s[4] + s[5]) cout << "YES"; else cout << "NO";
        cout << endl;
    }
}