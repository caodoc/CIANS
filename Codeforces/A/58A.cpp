#include <bits/stdc++.h>

using namespace std;

string s;
int cnt;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    string r = "hello";
    for (int i = 0;i < s.size();++i)
        if (r[cnt] == s[i]) cnt++;
    if (cnt == 5) cout << "YES";
    else cout << "NO";
}