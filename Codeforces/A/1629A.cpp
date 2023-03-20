#include <bits/stdc++.h>

using namespace std;

int t,n,k;

int main()
{
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int ram = k;
        pair<int, int> p[n + 1];
        for (int i = 1;i <= n;i++) cin >> p[i].first;
        for (int i = 1;i <= n;i++) cin >> p[i].second;
        sort(p + 1,p + 1 + n);
        for (int i = 1;i <= n;i++)
            if (ram < p[i].first) break;
            else ram += p[i].second;
        cout << ram << endl;
    }
}