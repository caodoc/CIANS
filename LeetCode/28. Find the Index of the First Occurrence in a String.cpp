class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() > haystack.size()) return -1;
        for (int i = 0;i < haystack.size();++i)
        {
            int cnt = 0;
            for (int j = 0;j < needle.size();++j)
                if (haystack[i + j] == needle[j]) cnt++;
                else break;
            if (cnt == needle.size()) return i;
        }
        return -1;
    }
};