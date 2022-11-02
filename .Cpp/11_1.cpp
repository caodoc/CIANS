#include <bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;

long long calc(long long x, long long n)
{
    if (n == 0) return 1;
    long long tmp = calc(x, n / 2);
    tmp = (tmp * tmp) % mod;
    if (n % 2 == 1) tmp = (tmp * x) % mod;
    return tmp;
}

int main()
{
    long long a = 2,n;
    cin >> n;
    cout << calc(a, n);
}