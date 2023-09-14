#include <bits/stdc++.h>
#define ii pair<int, int>

using namespace std;

const int N = 1e5 + 7;

int n,m,s,t,ch[N],d[N];
vector<ii> f[N];

void Dijkstra(int s)
{
    for (int i = 1;i <= n;++i) d[i] = INT_MAX;
    d[s] = 0;
    priority_queue<ii, vector<ii>, greater<ii>> q;
    q.push({0, s});
    while (!q.empty())
    {
        int u = q.top().second;
        q.pop();
        if (ch[u] != 0) continue;
        ch[u] = 1;
        for (ii it : f[u])
        {
            int v = it.first;
            int w = it.second;
            if (d[v] > d[u] + w)
            {
                d[v] = d[u] + w;
                q.push({d[v], v});
            }
        }
    }
    //for (int i = 1;i <= n;i++)
    //    cout << d[i] << " ";
    //cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("VANCHUYEN.INP","r",stdin);
    //freopen("VANCHUYEN.OUT","w",stdout);
    cin >> n >> m >> s >> t;
    int x,y,z;
    for (int i = 1;i <= m;++i)
    {
        cin >> x >> y >> z;
        f[x].push_back({y, z});
        f[y].push_back({x, z});
    }
    Dijkstra(s);
    cout << d[t];
}