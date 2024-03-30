#include <bits/stdc++.h>

using namespace std;

const int N = 105;
const long long oo = 1e13;

int n,m,k;
long long ar[N][N],ch[N][N];
stack<int> p;

void Input()
{
    cin >> n >> m >> k;
    for (int i = 1;i <= n;i++) 
        for (int j = 1;j <= n;j++)
            if (i == j) ar[i][j] = 0;
            else ar[i][j] = oo;
    int x,y,z;
    for (int i = 1;i <= m;i++) 
    {
        cin >> x >> y >> z;
        ar[x][y] = ar[y][x] = z;
    }
}

void Floyd()
{
    for (int i = 1;i <= n;i++)
        for (int j = 1;j <= n;j++)
            ch[i][j] = j;
    for (int k = 1;k <= n;k++)
        for (int i = 1;i <= n;i++)
            for (int j = 1;j <= n;j++)
                if (ar[i][j] > ar[i][k] + ar[k][j])
                {
                    ar[i][j] = ar[i][k] + ar[k][j];
                    ch[i][j] = ch[i][k];
                }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Input();
    Floyd();
    int c,u,v;
    int p[n + 1];
    while (k--)
    {
        cin >> c >> u >> v;
        if (c == 0) cout << ar[u][v];
        else
        {
            if (u == v) cout << 1 << " " << u;
            else
            {
                int cnt = 0;
                while (u != v)
                {
                    p[++cnt] = u;
                    u = ch[u][v];
                }
                p[++cnt] = u;
                cout << cnt << ' ';
                for(int i = 1;i <= cnt;i++) cout << p[i] << ' ';
            }
        }
        cout << endl;
    }
}