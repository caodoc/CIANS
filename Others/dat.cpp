#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,q,l,r,ar[N],st[N * 4];

void build(int id, int l, int r)
{
    if (l == r)
    {
        st[id] = l;
        return;
    }
    int mid = (l + r) / 2;
    build(id * 2, l, mid);
    build(id * 2 + 1, mid + 1, r);
    if (ar[st[id * 2]] >= ar[st[id * 2 + 1]]) st[id] = st[id * 2];
    else st[id] = st[id * 2 + 1];
}

int get(int id, int l, int r, int u, int v)
{
    if (l > v || r < u) return 0;
    if (l >= u && r <= v) return st[id];
    int mid = (l + r) / 2;
    int t1 = get(id * 2, l, mid, u, v);
    int t2 = get(id * 2 + 1, mid + 1, r, u, v);
    //cout << t1 << " " << t2 << "\n";
    if (ar[t1] >= ar[t2]) return t1;
    return t2;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> q;
    for (int i = 1;i <= n;++i) cin >> ar[i];
    build(1, 1, n);
    //for (int i = 1;i <= n * 4;++i) cout << st[i] << " ";
    //cout << "\n";
    while (q--)
    {
        cin >> l >> r;
        if (l == r - 1) cout << ar[l] + ar[r];
        else
        {
            int get1 = get(1, 1, n, l, r);
            int get2 = 0;
            int t1 = get(1, 1, n, l, get1 - 1);
            int t2 = get(1, 1, n, get1 + 1, r);
            if (ar[t1] >= ar[t2]) get2 = t1;
            else get2 = t2;
            //cout << get1 << " " << get2;
            cout << ar[get1] + ar[get2];
        }
        cout << "\n";
    }
}
