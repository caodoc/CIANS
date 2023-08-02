class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
    int n = 10001;
    long long dp[n + 7];
    map<long long, long long> sum;
    for (auto i : nums) sum[i] += i;
    dp[0] = 0;
    dp[1] = sum[1];
    for (int i = 2;i < n;++i)
        dp[i] = max(dp[i - 2] + sum[i], dp[i - 1]);
    return dp[n - 1];
    }
};