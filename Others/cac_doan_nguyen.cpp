#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> f;

struct st
{
    int s;
    int e;
};

bool cmp(st u, st v)
{
    if (u.s >= v.s && u.e == v.e) return u.s <= v.s;
    return u.e >= v.e;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    st ctn[n + 1];
    int x,y;
    for (int i = 1;i <= n;++i) cin >> ctn[i].s >> ctn[i].e;
    //for (int i = 1;i <= n;++i) cout << ctn[i].s << " " << ctn[i].e << "\n";
    //cout << "-----\n";
    sort(ctn + 1, ctn + 1 + n, cmp);
    //for (int i = 1;i <= n;++i) cout << ctn[i].s << " " << ctn[i].e << "\n";
    //cout << "-----\n";
    for (int i = 1;i <= n;++i)
    {
        int temp = upper_bound(f.begin(), f.end(), ctn[i].s) - f.begin();
        if (temp < f.size()) f[temp] = ctn[i].s;
        else f.push_back(ctn[i].s);
    }
    cout << f.size();
}