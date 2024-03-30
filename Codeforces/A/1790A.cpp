#include <bits/stdc++.h>

using namespace std;

int t;
string s;

int main()
{
    cin >> t;
    string pi = "314159265358979323846264338327";
    while (t--)
    {
        cin >> s;
        int res = 0;
        for (int i = 0;i < s.size();i++) if (s[i] == pi[i] && i < pi.size()) res++; else break;
        cout << res << endl;
    }
}