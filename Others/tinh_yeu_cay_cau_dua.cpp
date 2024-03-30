#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;

long long n,m,s,fm,t,ch[N];
vector<int> f[N];

void Input()
{
    cin >> n >> m >> s >> fm >> t;
    int x,y;
    for (int i = 1;i <= m;i++)
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
    while (!q.empty())
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

int main()
{
    Input();
    BFS(s);
    cout << (ch[fm] - 1) * t;
}