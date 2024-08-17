class Solution {
private:
    void getCombination(int idx, int target, vector<int>nums, vector<vector<int>>&res,vector<int>& f)
    {
        if (target == 0)
        {
            res.push_back(f);
            return;
        }
        for (int i = idx;i < nums.size();++i)
        {
            if (i > idx && nums[i] == nums[i - 1]) continue;
            if (nums[i] > target) break;
            f.push_back(nums[i]);
            getCombination(i + 1,target - nums[i], nums, res, f);
            f.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> f;
        sort(candidates.begin(), candidates.end());
        getCombination(0, target, candidates, res, f);
        return res;
    }
};