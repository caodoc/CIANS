#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        string s;
        cin >> n >> s;
        sort(s.begin(), s.end());
        cout << int(s[s.size() - 1]) - 96 << endl;
    }
}