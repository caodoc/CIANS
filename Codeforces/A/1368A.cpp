#include <bits/stdc++.h>

using namespace std;

int t,a,b,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> n;
        int s,res;
        res = s = 0;
        while (s <= n)
        {
            if (a > b)
            {
                b += a;
                s = b;
            }
            else
            {
                a += b;
                s = a;
            }
            if (s > n) break; else res++;
        }
        cout << res + 1 << endl;
    }
}