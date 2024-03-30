#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        s[0] -= 1;
        long long res = stoi(s);
        cout << res << endl;
    }
}