#include <bits/stdc++.h>

using namespace std;

int a,b,res;

int ck(int x)
{
    int t = 0;
    while (x != 0)
    {
        t = t * 10 + x % 10;
        x /= 10;
    }
    return t;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b;
    for (int i = a;i <= b;i++) if (__gcd(ck(i), i) == 1) res++;
    cout << res;
}