#include <bits/stdc++.h>

using namespace std;

int t;
string s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> s;
        int a,b;
        a = b = 0;
        for (int i = 0;i < s.size();++i)
            if (s[i] == '0') a++;
            else b++;
        //cout << a << " " << b << endl;
        if (a == b) cout << a - 1;
        else cout << min(a, b);
        cout << "\n";
    }
}