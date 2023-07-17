#include <bits/stdc++.h>

using namespace std;

int t,n;
string s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        char ch;
        for (int i = 0;i < n;++i)
        {
            ch = s[i];
            while (i < n - 1)
            {
                i++;
                if (ch == s[i])
                {
                    cout << ch;
                    break;
                }
            }
        }
        cout << "\n";
    }
}