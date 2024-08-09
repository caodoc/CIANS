class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        int dir[5] = {0, 1, 0, -1, 0};
        vector<vector<int>> res = {{rStart, cStart}};
        int temp = 0, n = 0;
        while (res.size() != rows * cols)
        {
            for (int i = 0;i < n / 2 + 1;++i)
            {
                rStart += dir[temp];
                cStart += dir[temp + 1];
                if (rStart >= 0 && rStart < rows && cStart >= 0 && cStart < cols)
                    res.push_back({rStart, cStart});
            }
            ++n;
            temp = (temp + 1) % 4;
        }
        return res;
    }
};