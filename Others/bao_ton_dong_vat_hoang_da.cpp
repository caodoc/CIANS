#include <bits/stdc++.h>
#define PAIR pair<int, int>

using namespace std;

const int N = 205;
const int M = 1e5 + 7;
const int INF = 1e9 + 7;

int n,a,b,x,y,t[N],d[M],ch[M];
vector<PAIR> f[M];

void Dijkstra(int s)
{
    for (int i = 1;i <= n;++i) d[i] = INF;
    d[s] = 0;
    priority_queue<PAIR, vector<PAIR>, greater<PAIR>> q;
    q.push({0, s});
    while (!q.empty())
    {
        int u = q.top().second;
        int uu = q.top().first;
        q.pop();
        if (ch[u] != 0) continue;
        ch[u] = 1;
        for (PAIR it : f[u])
        {
            int v = it.first;
            int w = it.second;
            if (d[v] > max(w, uu))
            {
                d[v] = max(w, uu);
                q.push({d[v], v});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> a >> b;
    for (int i = 1;i <= n;++i) cin >> t[i];
    int x,y;
    x = y = 0;
    while (cin >> x >> y)
    {
        //cout << x << " " << y << "\n";
        int z = abs(t[x] - t[y]);
        f[x].push_back({y, z});
        f[y].push_back({x, z});
    }
    Dijkstra(a);
    if (d[b] != INF) cout << d[b];
    else cout << -1;
}
