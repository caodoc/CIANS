#include <bits/stdc++.h>

using namespace std;

int t;
string s;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (s.size() % 2 != 0) cout << "NO";
        else
        {
            int tmp = 1;
            for (int i = 0;i < s.size() / 2;i++) if (s[i] != s[s.size() / 2 + i])
            {
                tmp = 0;
                break;
            }
            if (tmp == 1) cout << "YES"; else cout << "NO";
        }
        cout << "\n";
    }
}