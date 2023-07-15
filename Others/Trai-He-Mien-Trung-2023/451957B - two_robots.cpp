#include <bits/stdc++.h>

using namespace std;

const int N = 6e4 +7;

int n,m,ch[255][255],step[255][255],s,t;
vector<int> f[N];

void Input()
{
    cin >> n >> m >> s >> t ;
    int x,y;
    for (int i = 1;i <= m;++i)
    {
        cin >> x >> y;
        f[x].push_back(y);
    }
}

void BFS()
{
    queue<pair<int,int>> q;
    ch[s][t] = 1;
    q.push({s, t});
    while (!q.empty())
    {
        int u = q.front().first;
        int v = q.front().second;
        if (u == v)
        {
            cout << step[u][v] << " ";
            break;
        }
        q.pop();
        for (auto i : f[u])
            for (auto j : f[v])
                if (ch[i][j] == 0)
                {
                    q.push({i, j});
                    ch[i][j] = 1;
                    step[i][j] = step[u][v] + 1;
                }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Input();
    BFS();
}