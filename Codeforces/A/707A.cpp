#include <bits/stdc++.h>

using namespace std;

int n,m;
map<char, int> mp;
map<char, int> ::iterator it;

int main()
{
    cin >> n >> m;
    char x;
    for (int i = 1;i <= n;i++) 
    {
        for (int j = 1;j <= m;j++) 
        {
            cin >> x;
            mp[x]++;
        }
    }
    //for (it = mp.begin();it != mp.end();it++) cout << it->first << " " << it->second << endl;
    for (it = mp.begin();it != mp.end();it++) 
        if (it->first == 'C' || it->first == 'M' || it->first == 'Y')
            if (it->second >= 1)
            {
                cout << "#Color";
                return 0;
            }
    cout << "#Black&White";
}