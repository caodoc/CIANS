#include <bits/stdc++.h>

using namespace std;

string s,r;

bool calc(string x)
{
    int n = s.size();
    for (int i = 0;i < n;++i)
        if (s[i] != r[i]) return false;
    return true;
}

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    for (int i = s.size() - 1;i >= 0;--i)
        if (s[i] == '0') s.pop_back();
        else break;
    if (s.empty()) cout << "YES";
    else
    {
        r = s;
        reverse(s.begin(), s.end());
        if (calc(s)) cout << "YES";
        else
        {
            s.insert(0, 1, '0');
            if (calc(s)) cout << "YES";
            else cout << "NO";
        }
    }
}