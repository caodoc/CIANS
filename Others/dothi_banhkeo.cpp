#include <bits/stdc++.h>

using namespace std;

const int N = 1e4 + 7;

int n,m,k,kmin = INT_MAX,ch[N];
vector<int> f[N];

void Input()
{
    cin >> n >> m >> k;
    int x,y,z;
    for (int i = 1;i <= k;i++)
    {
        cin >> x;
        kmin = min(kmin, x);
    }
    for (int i = 1;i <= m;i++)
    {
        cin >> x >> y >> z;
        if (z >= kmin)
        {
            f[x].push_back(y);
            f[y].push_back(x);
        }
    }
}

void BFS(int u)
{
    queue<int> q;
    ch[u] = 1;
    q.push(u);
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int x : f[v]) if (ch[x] == 0)
        {
            ch[x] = 1;
            q.push(x);
        }
    }
}

int main()
{
    Input();
    int res = 0;
    for (int i = 1;i <= n;i++)
    {
        if (ch[i] == 0)
        {
            res++;
            BFS(i);
        }
    }
    cout << res;
}