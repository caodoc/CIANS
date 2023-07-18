#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,q,a,b;
long long ar[N],res;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for (int i = 1;i <= n;++i) cin >> ar[i];
    while (q--)
    {
        cin >> a >> b;
        if (a == b) res = ar[a];
        else if (a + 1 == b) res = ar[a] | ar[a + 1];
        else
        {
            res = ar[a] | ar[a + 1];
            for (int i = a + 2;i <= b;++i) res = res | ar[i];
        }
        cout << res << "\n";
    }
}