#include <bits/stdc++.h>

using namespace std;

int y,w;

int main()
{
    cin >> y >> w;
    if (max(y, w) == 6) cout << "1/6";
    else
    {
        int tmp = 6 - max(y, w) + 1;
        if (tmp == 0) cout << "0/1";
        else if (tmp == 1) cout << "1/1";
        else 
        {
            int t = __gcd(tmp, 6);
            cout << tmp / t << "/" << 6 / t;
        }
    }
}