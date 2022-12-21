#include <bits/stdc++.h>

using namespace std;

int n,m;
string s;

int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        cin >> s;
        m = s.size();
        if (m <= 10) cout << s;
        else cout << s[0] << m - 2 << s[m - 1];
        cout << endl;
    }
}