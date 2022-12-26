#include <bits/stdc++.h>

using namespace std;

string s;

int main()
{
    cin >> s;
    int t = 1;
    for (int i = 0;i < s.size();i++) if (s[i] == s[i + 1]) t++;
    else
    {
        if (t >= 7) 
        {
            cout << "YES";
            return 0;
        }
        t = 1;
    }
    cout << "NO";
}