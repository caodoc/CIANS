class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size(), m = 0;
        if (target > nums[r - 1]) return r;
        while (l <= r)
        {
            m = (l + r) / 2;
            if (nums[m] == target) return m;
            if (target > nums[m]) l = m + 1;
            else r = m - 1;
        }
        return l;
    }
};