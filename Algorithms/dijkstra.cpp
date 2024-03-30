#include <bits/stdc++.h>
#define ii pair<int, int>

using namespace std;

const int N = 1e5 + 7;
const int INF = 1e9 + 7;

int n,m,ch[N],d[N];
vector<ii> f[N];

void Input()
{
    cin >> n >> m;
    int x,y,z;
    for (int i = 1;i <= m;++i)
    {
        cin >> x >> y >> z;
        f[x].push_back({y, z});
        f[y].push_back({x, z});
    }
}

void Dijkstra(int s)
{
    for (int i = 1;i <= n;++i) d[i] = INF;
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
}

int main()
{
    Input();
    Dijkstra(1);
    cout << d[n];
}