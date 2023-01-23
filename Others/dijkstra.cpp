#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,m,k,d[N],vt[N];
vector<pair<int, int>> f[N];

void Input()
{
    cin >> n >> m >> k;
    int a,b,c;
    for (int i = 1;i <= m;i++)
    {
        cin >> a >> b >> c;
        f[a].push_back({b, c});
        f[b].push_back({a, c});
    }
}

void Dijkstra(int s)
{
    for (int i = 1;i <= n;i++) d[i] = INT_MAX;
    d[s] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, s});
    while (!q.empty())
    {
        int u = q.top().second;
        q.pop();
        if (vt[u] != 0) continue;
        vt[u] = 1;
        for (auto it : f[u])
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
    Dijkstra(1);
}