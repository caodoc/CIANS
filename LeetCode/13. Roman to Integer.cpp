class Solution {
public:
    int romanToInt(string s) 
    {
        map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        int res = 0;
        for (int i = 0;i < s.size();++i)
        {
            res += mp[s[i]];
            //cout << i << endl;
            if (s[i] == 'I')
            {
                if (s[i + 1] == 'V') 
                {
                    res += 3;
                    i += 1;
                }
                if (s[i + 1] == 'X') 
                {
                    res += 8;
                    i += 1;
                }
            }
            if (s[i] == 'X')
            {
                if (s[i + 1] == 'L') 
                {
                    res += 30;
                    i += 1;
                }
                if (s[i + 1] == 'C') 
                {
                    res += 80;
                    i += 1;
                }
            }
            if (s[i] == 'C')
            {
                if (s[i + 1] == 'D') 
                {
                    res += 300;
                    i += 1;
                }
                if (s[i + 1] == 'M') 
                {
                    res += 800;
                    i += 1;
                }
            }
        }
        return res;
    }
};