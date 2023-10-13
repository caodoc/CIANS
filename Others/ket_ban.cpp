#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;

int n,k,m,a,b,ch[N],res;
vector<int> f[N];

void Input()
{
    cin >> n >> k >> m;
    for (int i = 1;i <= m;++i)
    {
        cin >> a >> b;
        f[a].push_back(b);
        f[b].push_back(a);
    }
}
void DFS(int x)
{
    ch[x] = 1;
    for (int it : f[x]) if (ch[it] == 0)
    {
        res += 1;
        DFS(it);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("KETBAN.INP","r",stdin);
    //freopen("KETBAN.OUT","w",stdout);
    Input();
    DFS(k);
    cout << res;
}