#include<bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        string s;
        map<char,int> mp;
        map<char,int>:: iterator it;
        for (int j = 1;j <= n;j++)
        {
            cin >> s;
            for (int i = 0;i < s.size();i++) mp[s[i]]++;
        }
        int f = 0;
        for (it = mp.begin();it != mp.end();it++) if (it->second % n == 0) f = 1;
        else
        {
            f = 0;
            break;
        }
        if (f == 0) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
}