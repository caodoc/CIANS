#include<bits/stdc++.h>

using namespace std;

const long long N = 1e3 + 7;

int n,a[N][N],ch[N][N],d[N * N],m;
vector<pair<int, int>> adj[N * N];

void Input()
{
    cin >> n >> m;
    for (int i = 1;i <= n;++i)
    for (int j = 1;j <= m;++j)
    {
        cin >> a[i][j];
        adj[i * j].push_back({i, j});
    }
}

void BFS()
{
    queue<pair<int,int>>q;
    ch[1][1] = 1;
    q.push({1, 1});
    while (!q.empty())
    {
        pair<int, int> t = q.front();
        q.pop();
        int v = t.second;
        int u = t.first;
        if (d[a[u][v]] == 1) continue;
        d[a[u][v]] = 1;
        for (auto it : adj[a[u][v]])
        {
            int i = it.first;
            int j = it.second;
            if (ch[i][j] == 0)
            {
                q.push({i, j});
                ch[i][j] = 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    Input();
    BFS();
    if (ch[n][m] == 1) cout << "yes";
    else cout << "no";
}