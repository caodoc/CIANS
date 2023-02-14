#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,s,t,m,h[N],d[N];
vector<pair<int, int>> f[N];

void Input()
{
    cin >> n >> s >> t;
    for (int i = 1;i <= n;i++) cin >> h[i];
    cin >> m;
    int x,y;
    for (int i = 1;i <= m;i++)
    { 
        cin >> x >> y;
        int z = abs(h[x] - h[y]);
        //cout << z << endl;
        f[x].push_back({y, z});
        f[y].push_back({x, z});
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
        int uu = q.top().first;
        //cout << u << endl;
        q.pop();
        for (auto it : f[u])
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
    //for (int i = 1;i <= n;i++) cout << d[i] << " ";
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