#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;

int n,res,a[N];

map<int, int> m;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        cin >> a[i];
        res += m[-a[i]];
        m[a[i]]++;
    }
    cout << res;
}
