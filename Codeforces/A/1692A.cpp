#include <bits/stdc++.h>

using namespace std;

int t,a,b,c,d;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        int res = 0;
        if (b > a) res++;
        if (c > a) res++;
        if (d > a) res++;
        cout << res << endl;
    }
}