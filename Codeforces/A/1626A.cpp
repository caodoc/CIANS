#include <bits/stdc++.h>

using namespace std;

int t;
string s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> s;
        sort(s.begin(), s.end());
        cout << s << "\n";
    }
}