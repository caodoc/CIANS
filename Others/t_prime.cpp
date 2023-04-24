#include <bits/stdc++.h>

using namespace std;

int n;

long long calc(long long x)
{
    long long cnt = 0;
    long long tmp = sqrt(x);
    if (tmp * tmp != x) return 0;
    for (int i = 1;i <= sqrt(tmp);i++) 
    {
        if (cnt >= 3) return 0;
        if (tmp % i == 0) if (tmp / i == i) cnt++; else cnt += 2;
    }
    if (cnt == 2) return 1;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    long long x;
    for (int i = 1;i <= n;i++)
    {
        cin >> x;
        if (calc(x) == 1) cout << 1; else cout << 0;
        cout << " ";
    }
}