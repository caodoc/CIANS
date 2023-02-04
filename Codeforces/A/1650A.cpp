#include <bits/stdc++.h>

using namespace std;

int t;
string s;
char x;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> s >> x;
        int ck = 0;
        for (int i = 0;i < s.size();i++) if (s[i] == x && i % 2 == 0) 
        {
            ck = 1;
            break;
        }
        if (ck == 1) cout << "YES"; else cout << "NO";
        cout << endl;
    }
}