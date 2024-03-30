#include <bits/stdc++.h>

using namespace std;

const int N = 3e3 + 7;

int n,f[N],res;

struct st
{
    int a;
    int b;
    int val;
};

st ar[N];

bool cmp(st &u, st &v)
{
    return ((u.a > v.a) || (u.a == v.a && u.b > v.b));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;++i)
    {
        cin >> ar[i].a >> ar[i].b >> ar[i].val;
        if (ar[i].a < ar[i].b) swap(ar[i].a, ar[i].b);
    }
    sort(ar + 1,ar + 1 + n,cmp);
    //for (int i = 1;i <= n;++i) cout << ar[i].a << " " << ar[i].b << " " << ar[i].val << "\n";
    for (int i = 1;i <= n;++i)
    {
        f[i] = ar[i].val;
        for (int j = 1;j <= i - 1;++j)
        {
            if (ar[i].b <= ar[j].b)
            {
                f[i] = max(f[i], f[j] + ar[i].val);
            }
        }
        res = max(res, f[i]);
    }
    cout << res;
}