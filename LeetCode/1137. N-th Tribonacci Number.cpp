#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    long long dp[n + 7];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3;i <= n;++i)
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    cout << dp[n];
}