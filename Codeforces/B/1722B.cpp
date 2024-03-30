#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        string s1,s2;
        cin >> n >> s1 >> s2;
        for (int i = 0;i < n;i++) 
        {
            if (s1[i] == 'B') s1[i] = 'G';
            if (s2[i] == 'B') s2[i] = 'G';
        }
        if (s1 == s2) cout << "YES"; else cout << "NO";
        cout << endl;
    }
}