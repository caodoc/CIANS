#include<bits/stdc++.h>

using namespace std;

const long long N = 1e6 + 7;

int n;
long long res,x,cnt,t[N],p,a[N];

priority_queue<long long>q;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 1;i <= n;++i)
    {
        cin >> x;
        q.push(x);
    }
    cnt = 1;
    t[0] = 0;
    res = 1e18 + 7;
    while (!q.empty())
    {
        x = q.top();
        q.pop();
        t[cnt] = t[cnt - 1] + x;
        cnt++;
    }
    for (int k = max(1, n / 12);k <= n;++k)
    {
        long long cp = 3600 * (k - 1);
        long long p = 1;
        for(int i = 1;i <= n;i += k)
        {
            cp += p * (t[min(n, i + k - 1)] - t[i - 1]);
            p *= 2;
        }
        res = min(res, cp);
    }
    cout << res;
}