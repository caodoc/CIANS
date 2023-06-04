#include <bits/stdc++.h>

using namespace std;

int m;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> m;
    vector<int> cost;
    int x;
    for (int i = 0;i < m;++i) 
    {
        cin >> x;
        cost.push_back(x);
    }
    int n = cost.size();
    long long dp[n + 7];
    dp[0] = cost[0];
    dp[1] = cost[1];
    for (int i = 2;i < n;++i)
        dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
    cout << min(dp[n - 2], dp[n - 1]);
}