#include <bits/stdc++.h>

using namespace std;

int t;

int main()
{
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a,b,c;
        a = b = c = 0;
        for (int i = 0;i < s.size();i++)
        {
            if (s[i] == 'A') a++;
            if (s[i] == 'B') b++;
            if (s[i] == 'C') c++;
        }
        if (b == a + c) cout << "YES"; else cout << "NO";
        cout << endl;
    }
}