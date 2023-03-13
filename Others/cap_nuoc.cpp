#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,m,k,h[N],ch[N];
vector<int> f[N];

void Input()
{
    cin >> n >> m >> k;
    for (int i = 1;i <= n;i++) cin >> h[i];
    int x,y;
    for (int i = 1;i <= m;i++)
    {
        cin >> x >> y;
        if (h[x] >= h[y]) f[x].push_back(y);
        if (h[x] <= h[y]) f[y].push_back(x);
    }
}

void DFS(int u)
{
    ch[u] = 1;
    for (int x : f[u]) if (ch[x] == 0) DFS(x);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Input();
    DFS(k);
    int res = 0;
    for (int i = 1;i <= n;i++) if (ch[i] == 1) res++;
    //for (int i = 1;i <= n;i++) cout << ch[i] << " ";
    //cout << endl;
    cout << res;
}