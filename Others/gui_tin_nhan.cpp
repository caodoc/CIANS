#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,m,ch[N];
vector<int> f[N];

void DFS(int s)
{
    ch[s] = 1;
    for (int x : f[s]) 
        if (ch[x] == 0) 
            DFS(x);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    int x,y;
    for (int i = 1;i <= m;i++)
    {
        cin >> x >> y;
        f[x].push_back(y);
        f[y].push_back(x);
    }
    int res = 0;
    for (int i = 1;i <= n;i++) 
        if (ch[i] == 0) 
        {
            res += 1;
            DFS(i);
        }
    cout << res;
}