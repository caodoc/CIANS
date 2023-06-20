#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

int n,l,f[N],s,t,i;
long long r[N];

struct st
{
    int s,t,i;
};

st p[N];

bool comp(st a,st b)
{
    return ((a.s < b.s) || (a.s == b.s && a.t > b.t));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("WALKING.INP","r",stdin);
    //freopen("WALKING.OUT","w",stdout);
    cin >> n >> l;
    for (int i = 1;i <= n;++i) 
    {
        cin >> p[i].s >> p[i].t;
        p[i].i = i;
    }
    sort(p + 1,p + 1 + n,comp);
    //for (int i = 1;i <= n;++i) cout << p[i].s << " " << p[i].t << " " << p[i].i << endl;
    for (int j = 1;j <= n;++j)
    {
        s = p[j].s;
        t = p[j].t;
        i = p[j].i;
        r[i] = max(r[p[j - 1].i], s + 1LL * t * l);
    }
    for (int i = 1;i <= n;++i) 
        cout << r[i] << "\n";
}