#include <bits/stdc++.h>

using namespace std;

int t,s;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> s;
        long long res = 0,pow = 1;
        for (int i = 9;i >= 1;i--)
        {
            if (i > s) continue;
            res += pow * i; 
            pow *= 10;
            s -= i;
        }
        cout << res << endl;
    }
}