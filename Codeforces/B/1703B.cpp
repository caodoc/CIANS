#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        char s;
        int res = 0;
        map<char, int> mp;
        for (int i = 1;i <= n;i++)
        {
            cin >> s;
            mp[s]++;
        }
        for (auto it = mp.begin();it != mp.end();it++) 
        {
            //cout << it->first << " " << it->second << endl;
            if (it->second == 1) res += 2; else res += 1 + it->second;
        }
        cout << res << endl;
    }
}