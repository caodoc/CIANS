#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 +7; 

int n,m,ch[N];
vector<int> f[N];

void Input()
{
    cin >> n >> m;
    int x,y;
    for (int i = 0;i < m;i++)
    {
        cin >> x >> y;
        f[x].push_back(y);
        f[y].push_back(x);
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
        cout << v << " ";
        for (int x : f[v]) if (ch[x] == 0)
        {
            q.push(x);
            ch[x] = 1;
        }
    }
}

int main()
{
    Input();
    BFS(1);
}