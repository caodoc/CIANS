class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> f;
        for (auto& it : arr) f[it]++;
        for (auto& it : arr)
            if (f[it] == 1)
            {
                k--;
                if (k == 0) return it;
            }
        return "";
    }
};