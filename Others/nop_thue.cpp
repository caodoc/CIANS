#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;

long long n,f[N];

int snt(long long n)
{
    for (int i = 2;i <= sqrt(n);++i)
    {
        if (n % i == 0) return 0;
    }
    return n > 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    if (snt(n)) cout << 1;
    else if (n % 2 == 0) cout << 2;
    else if (snt(n-2)) cout << 2;
    else cout << 3;
}