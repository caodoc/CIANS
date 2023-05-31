#include <bits/stdc++.h>

using namespace std;

int t;
string s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    string r = "codeforces";
    while (t--)
    {
        cin >> s;
        int cnt = 0;
        for (int i = 0;i <= 9;++i) 
            if (s[i] != r[i]) cnt++;
        cout << cnt << endl;
    }
}