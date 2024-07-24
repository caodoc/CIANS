#include <bits/stdc++.h>

using namespace std;

const int N = 1e4 + 7;

int t,n,ar[N];
long long res;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        res = 1;
        memset(ar, 0, sizeof(ar));
        for (int i = 1;i <= n;++i) cin >> ar[i];
        sort(ar + 1,ar + 1 + n);
        ar[1] += 1;
        for (int i = 1;i <= n;++i) res *= ar[i];
        cout << res << "\n";
    }
}