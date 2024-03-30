class Solution {
public:
    int mySqrt(int x) {
        long long res = 0;
        for (long long i = 1;i <= x;++i)
        {
            long long temp = i * i;
            if (temp <= x) res = i;
            else break;
        }
        return res;
    }
};