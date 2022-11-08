#include <bits/stdc++.h>

using namespace std;

int n,m,k,x,y,res = 0;

map<int, int> mp;

int main()
{
    cin >> n >> m >> k;
    for (int i = 1;i <= n;i++)
    {
        cin >> x;
        mp[x]++;
    }
    for (int i = 1;i <= m;i++)
    {
        cin >> y;
        res += mp[k - y];
    }
    cout << res;
}