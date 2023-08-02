class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        long long res = 0;
        for (int i = 0;i < n;++i)
        {
            int m = accounts[i].size();
            long long temp = 0;
            for (int j = 0;j < m;++j)
                temp += accounts[i][j];
            res = max(res, temp);
        }
        return res;
    }
};