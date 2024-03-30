#include <bits/stdc++.h>

using namespace std;

long long n,i,s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    while (s <= n)
    {
        i++;
        s = (i * (i + 1) * (2 * i + 1)) / 6;
    }
    cout << i - 1;
}