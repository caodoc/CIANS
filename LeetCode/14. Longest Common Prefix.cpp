class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        sort(str.begin(), str.end());
        string s = str.front();
        string r = str.back();
        string res = "";
        for (int i = 0;i < min(s.size(), r.size());++i)
            if (s[i] != r[i]) return res;
            else res += s[i];
        return res;
    }
};