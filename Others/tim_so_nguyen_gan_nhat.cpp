#include <bits/stdc++.h>

using namespace std;

int t;
long long n;

bool calc(long long x)
{
    for (int i = 2;i <= sqrt(x);++i)
        if (x % i == 0) return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        while (n--)
            if (calc(n) == true)
            {
                cout << n << "\n";
                break;
            }
    }
}