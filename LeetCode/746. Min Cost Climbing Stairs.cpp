class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
    int n = cost.size();
    int res = 0;
            long long dp[n + 7];
            dp[0] = cost[0];
            dp[1] = cost[1];
            for (int i = 2;i < n;++i)
                dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
            res = min(dp[n - 2], dp[n - 1]);
    return res;
    }
};