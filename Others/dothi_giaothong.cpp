#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,m;
vector<pair<int, int>> f[N];

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
    vector<long long> d(n + 1, N);
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
    //for (int i = 1;i <= n;i++) cout << d[i] << " ";
    cout << d[n];
}

int main()
{
    Input();
    Dijkstra(1);
}