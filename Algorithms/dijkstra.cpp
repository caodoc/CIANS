#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;
const int INF = 1e9;

int n,m;
vector<pair<int, int>> adj[N];

void Input()
{
    cin >> n >> m;
    int x,y,z;
    for (int i = 1;i <= m;i++)
    {
        cin >> x >> y >> z;
        adj[x].push_back({y, z});
        adj[y].push_back({x, z});
    }
}

void dijkstra(int s)
{
    vector<long long> d(n + 1, INF);
    d[s] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, s});
    while (!q.empty())
    {
        pair<int, int> top = q.top(); 
        q.pop();
        int u = top.second;
        int kc = top.first;
        if (kc > d[u]) continue;
        for (auto it : adj[u])
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
    for (int i = 1;i <= n;i++) cout << d[i] << " ";
}

int main()
{
    Input();
    dijkstra(1);
}