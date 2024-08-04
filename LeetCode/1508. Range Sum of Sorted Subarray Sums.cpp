class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        const int MOD = 1e9 + 7;
        vector<int> array;
        for (int i = 0;i < n;++i)
        {
            int temp = 0;
            for (int j = i;j < n;++j)
            {
                temp += nums[j];
                array.push_back(temp);
            }
        }
        sort(array.begin(), array.end());
        long long res = 0;
        for (int i = left - 1;i < right;++i) res = (res + array[i]) % MOD;
        return res;
    }
};