#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,a,b,ch[N];
vector<int> f[N];

void Input()
{
    cin >> n >> a >> b;
    int x,y;
    for (int i = 1;i <= n;i++)
    {
        cin >> x >> y;
        f[x].push_back(y);
        f[y].push_back(x);
    }
}

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    ch[u] = 1;
    while(!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int x : f[v]) if (ch[x] == 0)
        {
            ch[x] = ch[v] + 1;
            q.push(x);
        }
    }
}
main()
{
    Input();
    BFS(a);
    if (ch[b] == 0) cout << -1; else cout << ch[b] - 2;
}