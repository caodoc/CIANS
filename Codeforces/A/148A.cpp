#include <bits/stdc++.h>

using namespace std;

int k,l,m,n,d,res;

int LCM(int m, int n)
{
    int mm(m), nn(n), r;
    while ((r = m % n) != 0)
    {
        m = n;
        n = r;
    }
    return mm / n * nn;
}

int main()
{
    cin >> k >> l >> m >> n >> d;
    int lcm = LCM(LCM(k, l), LCM(m, n));
    if (d > lcm)
    {
        int r = 0;
        for (int i = 1; i <= d % lcm; ++i) if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) r++;
        int c = r;
        for (int i = d % lcm + 1; i <= lcm; ++i) if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) c++;
        res = c * (d / lcm) + r;
    }
    else for (int i = 1; i <= d; ++i) if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) res += 1;
    cout << res;
}