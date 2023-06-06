#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    vector<int> nums;
    int x;
    for (int i = 0;i < n;++i) 
    {
        cin >> x;
        nums.push_back(x);
    }
    int n = 10001;
    long long dp[n + 7];
    map<long long, long long> sum;
    for (auto i : nums) sum[i] += i;
    dp[0] = 0;
    dp[1] = sum[1];
    for (int i = 2;i < n;++i)
        dp[i] = max(dp[i - 2] + sum[i], dp[i - 1]);
    cout << dp[n - 1];
}