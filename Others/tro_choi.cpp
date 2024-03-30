#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;

long long n,k,ar[N],f[N],res;
deque<long long> q;

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1;i <= n;++i) cin >> ar[i];
    q.push_back(0);
    for (int i = 1;i <= n;++i)
    {
        if (!q.empty() && q.front() < i - k) q.pop_front();
        f[i] = f[q.front()] + ar[i];
        res = max(res, f[i]);
        while (!q.empty() && f[q.back()] < f[i]) q.pop_back();
        q.push_back(i);
    }
    cout << res;
}