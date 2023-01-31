#include<bits/stdc++.h>

using namespace std;

const int MaxN = 1 + 1e3;

int n, m, a[MaxN][MaxN], ch[MaxN][MaxN];
vector<int> ans;

int BFS(int u, int v)
{
    queue<pair<int, int>> q;
    int cl = a[u][v], tmp = 1;
    ch[u][v] = 1;
    q.push({u, v});
    while (!q.empty())
    {
        u = q.front().first;
        v = q.front().second;
        q.pop();
        if (u - 1 >= 1 && ch[u - 1][v] == 0 && a[u - 1][v] == cl)
        {
            ch[u - 1][v] = 1;
            q.push({u - 1, v});
            tmp++;
        }
        if (u + 1 <= n && ch[u + 1][v] == 0 && a[u + 1][v] == cl)
        {
            ch[u + 1][v] = 1;
            q.push({u + 1, v});
            tmp++;
        }
        if (v + 1 <= m && ch[u][v + 1] == 0 && a[u][v + 1] == cl)
        {
            ch[u][v + 1] = 1;
            q.push({u, v + 1});
            tmp++;
        }
        if (v - 1 >= 1 && ch[u][v - 1] == 0 && a[u][v - 1] == cl)
        {
            ch[u][v - 1] = 1;
            q.push({u, v - 1});
            tmp++;
        }
    }
    return tmp;
}

int main()
{
    cin >> n >> m;
    for (int i = 1;i <= n;i++) 
    {
        for (int j = 1;j <= m;j++) 
        {
            char c;
            cin >> c;
            a[i][j] = c - 48;
        }
    }
/*    for (int i = 1;i <= n;i++) 
    {
        for (int j = 1;j <= m;j++) cout << a[i][j] << " ";
        cout << endl;
    }  */
    int res = 0,cnt = 0;
    for (int i = 1;i <= n;i++) for (int j = 1;j <= m;j++) if (ch[i][j] == 0)
    {
        res++;
        cnt = max(cnt, BFS(i, j));
    }
    cout << res << endl << cnt;
}