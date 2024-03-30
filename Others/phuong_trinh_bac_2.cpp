#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;

int n;
long long ar[N],cnt;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("PTB2.INP","r",stdin);
    //freopen("PTB2.OUT","w",stdout);
    cin >> n;
    if (n <= 3000)
    {
        for (int i = 1;i <= n;++i) cin >> ar[i];
        sort(ar + 1,ar + 1 + n);
        for (int i = 1;i < n;++i)
            for (int j = i + 1;j <= n;++j)
                if (binary_search(ar + 1, ar + 1 + n, ar[i] + ar[j]) == 1) cnt++;
        cout << cnt * 2;
        return 0;
    }
    for (int i = 1;i <= n;++i) cin >> ar[i];
    for (int i = 3;i <= n;++i) cnt = cnt + (i - 1) / 2;
    cout << cnt * 2;
}