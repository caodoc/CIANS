#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;

int n,k,m,ch[N],a[N];
vector<int> f[N];
set<int> s;

void Input()
{
    cin >> n >> k >> m;
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
        //cout << v << " ";
        s.insert(v);
        for (int x : f[v]) if (ch[x] == 0)
        {
            q.push(x);
            ch[x] = 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Input();
    BFS(k);
    //cout << "\n";
    cout << s.size() - 1;
}