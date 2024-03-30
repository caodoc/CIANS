#include <bits/stdc++.h>

using namespace std;

long long u,d,x,t;

int main()
{
    cin >> u >> d >> x;
    t = (x - u) / d + 1;
    if ((t - 1) * d + u == x) cout << t; else cout << -1;
}