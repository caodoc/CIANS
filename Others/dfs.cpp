#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

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

void DFS(int u)
{
    cout << u << " ";
    ch[u] = 1;
    for (int x : f[u]) if (ch[x] == 0) DFS(x);
}

int main()
{
    Input();
    DFS(1);
}