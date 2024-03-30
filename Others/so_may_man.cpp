#include <bits/stdc++.h>

using namespace std;

int n,t,x;
map<int, int> mp;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("SOMAYMAN.INP","r",stdin);
    //freopen("SOMAYMAN.OUT","w",stdout);
    cin >> n >> t;
    for (int i = 1;i <= n;++i)
    {
        cin >> x;
        mp[x] += 1;
    }
    for (int i = 1;i <= t;++i)
    {
        cin >> x;
        cout << mp[x] << "\n";
    }
}