#include <bits/stdc++.h>

using namespace std;

long long t,n,m,x;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> x;
        long long t1,t2;
        t1 = x / n;
        t2 = x % n;
        if (x % n != 0) t1++;
        if (t2 == 0) t2 = n;
        long long res = ((t2 - 1) * m) + t1;
        cout << res << endl;
    }
}