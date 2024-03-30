#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int N = 1e6 + 7;

int n,m,s,t,ch[N];
ll d[N];
vector<pair<int, int>> f[N];

void Input()
{
    cin >> n >> m >> s >> t;
    int x,y,z;
    for (int i = 1;i <= m;i++)
    {
        cin >> x >> y >> z;
        f[x].push_back({y, z});
        f[y].push_back({x, z});
    }
}

void Dijkstra(int s)
{
    ll x;
    for (int i = 1;i <= n;i++) d[i] = 0;
    d[s] = INT_MAX;
    priority_queue<pair<int, int>> q;
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
            ll w = it.second;
            x = min(d[u], w);
            if (d[v] < x)
            {
                d[v] = x;
                q.push({d[v], v});
            }
        }
    }
    //for (int i = 1;i <= n;i++) cout << d[i] << " ";
    //cout << endl;
    cout << d[t];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Input();
    Dijkstra(s);
}