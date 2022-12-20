#include <bits/stdc++.h>

using namespace std;

long long n,s;

int main()
{
    cin >> s;
    n = pow(s * 6, 1.0 / 3);
    while (s < (n * (n + 1) * (2 * n + 1)) / 6) n--;
    cout << n;
}
