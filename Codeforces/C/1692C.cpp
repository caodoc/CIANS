#include <bits/stdc++.h>

using namespace std;

int t;

int main()
{
    cin >> t;
    while (t--)
    {
        vector<string> mp(8);
        int r = 0,c = 0;
        for (int i = 0;i < 8;i++) cin >> mp[i];
        for (int i = 1;i < 7;i++)
            for (int j = 1;j < 7;j++)
            {
                if (mp[i][j] != '#') continue;
                if (mp[i + 1][j + 1] != '#') continue;
                if (mp[i + 1][j - 1] != '#') continue;
                if (mp[i - 1][j + 1] != '#') continue;
                if (mp[i - 1][j - 1] != '#') continue;
                r = i + 1; 
                c = j + 1;
            }
        cout << r << " " << c << endl;
    }
}