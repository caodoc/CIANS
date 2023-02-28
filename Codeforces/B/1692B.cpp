#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        map<int, int> mp;
        int x;
        for (int i = 1;i <= n;i++)
        {
            cin >> x;
            mp[x]++;
        }
        int chan = 0, le = 0;
        for (auto it = mp.begin(); it != mp.end();it++)
        {
            int temp = it->second;
            if (temp % 2 != 0) le++; else chan++;
        }
        cout << chan + le - (chan % 2) << endl;
    }
}