#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,m,a,b;
int d1[N], d2[N], vt1[N], vt2[N];
vector<pair<int, int>> f[N];

void Input()
{
    cin >> n >> m >> a >> b;
    int x,y,z;
    for (int i = 1;i <= m;i++)
    {
        cin >> x >> y >> z;
        f[x].push_back({y, z});
        f[y].push_back({x, z});
    }
}

void Dijkstra(int s)
{
    for (int i = 1;i <= n;i++) d1[i] = INT_MAX;
    d1[s] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, s});
    while (!q.empty())
    {
        int u = q.top().second;
        q.pop();
        if (vt1[u] != 0) continue;
        vt1[u] = 1;
        for (auto it : f[u])
        {
            int v = it.first;
            int w = it.second;
            if (d1[v] > d1[u] + w)
            {
                d1[v] = d1[u] + w;
                q.push({d1[v], v});
            }
        }
    }
}

void Dijkstra2(int s)
{
    for (int i = 1;i <= n;i++) d2[i] = INT_MAX;
    d2[s] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, s});
    while (!q.empty())
    {
        int u = q.top().second;
        q.pop();
        if (vt2[u] != 0) continue;
        vt2[u] = 1;
        for (auto it : f[u])
        {
            int v = it.first;
            int w = it.second;
            if (d2[v] > d2[u] + w)
            {
                d2[v] = d2[u] + w;
                q.push({d2[v], v});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Input();
    Dijkstra(a);
    Dijkstra2(b);
/*  
    for (int i = 1;i <= n;i++) cout << d1[i] << " ";
    cout << endl;
    for (int i = 1;i <= n;i++) cout << d2[i] << " ";
    cout << endl;
*/    
    int res = 0;
    int tmp = INT_MAX;
    for (int i = 1;i <= n;i++) if (d1[i] == d2[i] && d1[i] < tmp)
    {   
        tmp = d1[i];
        res = i;
        //cout << d1[i] << " " << res << endl;
    }
    if (res == 0) cout << "CRY"; else cout << res;
}