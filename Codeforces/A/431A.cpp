#include <bits/stdc++.h>

using namespace std;

int a[5],res = 0;
string s;

int main()
{
    for (int i = 1;i <= 4;i++) cin >> a[i];
    cin >> s;
    for (int i = 0;i < s.size();i++)
    {
        if (int(s[i]) == 49) res += a[1];
        if (int(s[i]) == 50) res += a[2];
        if (int(s[i]) == 51) res += a[3];
        if (int(s[i]) == 52) res += a[4];
    }
    cout << res;
}