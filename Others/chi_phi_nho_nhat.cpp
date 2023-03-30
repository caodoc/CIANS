#include <bits/stdc++.h>

using namespace std;

const int N = 105;

int n,d[N],ch[N];
vector<pair<int, int>> f[N];

void Input()
{
    cin >> n;
    bool check = true;
    int i,j,k;
    while (cin >> i >> j >> k)
    {
        f[i].push_back({j, k});
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
            }
        }
    }
    //for (int i = 1;i <= n;i++) cout << d[i] << " ";
    cout << d[n];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    Input();
    Dijkstra(1);
}
