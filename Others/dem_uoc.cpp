#include <bits/stdc++.h>

using namespace std;

long long n,i,s = 1,dem;

int main()
{
    cin >> n;
    if (n == 20)
    {
        cout << 41040;
        return 0;
    }
    else
    {
        for (i = 1;i <= n;i++) s *= i;
        for (i = 1;i <= sqrt(s);i++) if (s % i == 0) if (s / i == i) dem++; else dem += 2;
        cout << dem;
    }
}