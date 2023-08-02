class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
    int n = nums.size();
    vector<int> dp;
    for (int i = 0;i < n;++i)
    {
        int temp = lower_bound(dp.begin(), dp.end(), nums[i]) - dp.begin();
        if (temp >= dp.size()) dp.push_back(nums[i]);
        else dp[temp] = nums[i];
    }
    return dp.size();
    }
};