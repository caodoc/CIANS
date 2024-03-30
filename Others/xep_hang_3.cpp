#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,h[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("XEPHANG.INP","r",stdin);
    //freopen("XEPHANG.OUT","w",stdout);
    cin >> n;
    vector<pair<int, int>> f;
    int x;
    for (int i = 1;i <= n;++i) 
    {
        cin >> x;
        f.push_back({x, i});
    }
    sort(f.begin(), f.end());
    int temp = 1;
    int r[n + 5];
    r[0] = 1;
    for (int i = 1;i < n;++i)
    {
        if (f[i].second > f[i - 1].second) r[i] = r[i - 1] + 1;
        else r[i] = 1;
        temp = max(temp, r[i]);
    }
    cout << n - temp;
}