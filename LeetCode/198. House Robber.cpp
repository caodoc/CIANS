class Solution {
public:
    int rob(vector<int>& nums) {
    nums.push_back(0);
    int n = nums.size();
    long long dp[n + 7];
    dp[0] = nums[0];
    if (nums[0] > nums[1]) dp[1] = nums[0];
    else dp[1] = nums[1];
    for (int i = 2;i < n;++i)
        dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
    return dp[n - 1];
    }
};