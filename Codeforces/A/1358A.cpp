#include <bits/stdc++.h>

using namespace std;

double t,n,m;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        long long res = ceil(n * m / 2);
        cout << res << endl;
    }
}