#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 7;

int n,m,ch[N];
long long d[N],ar[N];
vector<pair<long long,long long>> f[N];

void Input()
{
    cin >> n >> m;
    long long k,v,u,l;
    for (int i = 1;i <= m;i++)
    {
        cin >> k >> u >> v >> l;
        f[u].push_back({v, l});
        if (k == 2) f[v].push_back({u, l});
    }
}

void Dijkstra(int s)
{
    for (int i = 1;i <= n;i++) d[i] = 1e15;
    d[s] = 0;
    ar[s] = 1;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, s});
    while (!q.empty())
    {
        int u = q.top().second;
        q.pop();
        if (ch[u] != 0) continue;
        ch[u] = 1;
        for (auto it : f[u])
        {
            int v = it.first;
            int w = it.second;
            if (d[v] > d[u] + w)
            {
                d[v] = d[u] + w;
                q.push({d[v], v});
                ar[v] = ar[u];
            }
            else if (d[v] == d[u] + w) ar[v] += ar[u];
        }
    }
    //for (int i = 1;i <= n;i++) cout << d[i] << " ";
    //cout << endl;
    cout << d[n] << " " << ar[n];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Input();
    Dijkstra(1);
}