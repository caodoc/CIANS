#include <bits/stdc++.h>

using namespace std;

int t,w,h,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> w >> h >> n;
        int res = 1;
        if (n == 1) cout << "YES";
        else
        {
            while (w % 2 == 0)
            {
                res *= 2;
                w = w / 2;
            }
            while (h % 2 == 0)
            {
                res *= 2;
                h = h / 2;
            }
            if (n <= res) cout << "YES"; else cout << "NO";
        }
        cout << "\n";
    }
}