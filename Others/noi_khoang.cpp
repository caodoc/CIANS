#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

int f[N],n,t[N],res;

struct st
{
    int x, y;
};

st a[N];

bool comp(st u, st v)
{
    return ((u.y < v.y) || (u.y == v.y && u.x < v.x));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("CONINT.INP","r",stdin);
    //freopen("CONINT.OUT","w",stdout);
    cin >> n;
    for (int i = 1;i <= n;++i) cin >> a[i].x >> a[i].y;
    sort(a + 1,a + 1 + n, comp);
    for (int i = 1;i <= n;++i) t[i] = a[i].y;
    //for (int i = 1;i <= n;++i) cout << a[i].x << " " << a[i].y << endl;
    f[1] = 1;
    for (int i = 2;i <= n;++i)
    {
        int cnt = upper_bound(t + 1,t + i,a[i].x) - t - 1;
        if (a[cnt].y == a[i].x && cnt != i) f[i] = f[cnt] + 1;
        else f[i] = 1;
        if(a[i].y == a[i - 1].y) f[i] = max(f[i], f[i - 1]);
    }
    //for(int i = 1;i <= n;++i) cout << f[i] << " ";
    cout << *max_element(f + 1,f + 1 + n);
}