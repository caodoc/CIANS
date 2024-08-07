class Solution {
public:
    int minimumPushes(string word) {
        vector<int> vect(26, 0);
        for (char ch : word) vect[ch - 'a']++;
        sort(vect.begin(), vect.end());
        int res = 0;
        int cnt = 1;
        for (int i = 25;i >= 0;--i)
        {
            if (vect[i] == 0) break;
            if (i != 25 && (25 - i) % 8 == 0) cnt++;
            res += vect[i] * cnt;
        }
        return res;
    }
};