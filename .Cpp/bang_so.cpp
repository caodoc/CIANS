#include <bits/stdc++.h>

using namespace std;

long long n,i,x,dem;

int calc(int a)
{
    int tmp = 0;
    for (int j = 1;j <= n;j++) if (i * j == x) tmp++;
    return tmp;
}

int main()
{
    cin >> n >> x;
    n = min(n, x);
    for (i = 1;i <= n;i++) if (x % i == 0) dem += calc(i);
    cout << dem;
}