#include <bits/stdc++.h>

using namespace std;

long long n,k;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    if (k <= (n + 1) / 2) cout << k * 2 - 1;
    else cout << (k - (n + 1) / 2) * 2;
}