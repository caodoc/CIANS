#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;

long long n,m,k,ch[N];
vector<int> f[N];

void Input()
{
    cin >> n >> m >> k;
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
    //for (int i = 1;i <= n;i++) cout << ch[i] << " ";
    for (int i = 1;i <= n;i++) ch[i] -= 1;
}

bool check(long long x)
{
    long long sum = 0;
    for (int i = 2; i <= n; i++) if (ch[i] <= n)  
    {
        sum += x / ch[i];
        if (sum >= k) return 1;
    }
    return 0;
}

int main()
{
    Input();
    BFS(1);
    long long l = 0,r = 1e16;
    while (r - l > 1)
    {
        long long mid = (l + r) / 2;
        if (check(mid)) r = mid; else l = mid;
    }
    cout << r;
}