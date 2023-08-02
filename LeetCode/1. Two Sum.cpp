class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int var = target - nums[i];
            if (mp.count(var)) return {mp[var], i};
            mp[nums[i]] = i;
        }
        return {};
    }
};