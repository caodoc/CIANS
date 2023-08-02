class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        string s;
        while (x > 0)
        {
            char digit = x % 10 + '0';
            s = digit + s;
            x /= 10;
        }
        //cout << s;
        for (int i = 0;i < s.size() / 2;++i)
            if (s[i] != s[s.size() - 1 - i])
            {
                //cout << "false";
                return false;
            }
        //cout << "true";
        return true;
    }
};