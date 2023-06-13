#include <bits/stdc++.h>

using namespace std;

const int N = 1e4 + 7;

int n,m,ch[N],cnt;
vector<int> f[N];

void DFS(int u)
{
    ch[u] = 1;
    cnt++;
    for (int x : f[u]) 
        if (ch[x] == 0) DFS(x);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("KD.INP","r",stdin);
    //freopen("KD.OUT","w",stdout);
    cin >> n >> m;
    int x,y;
    for (int i = 1;i <= m;++i)
    {
        cin >> x >> y;
        f[x].push_back(y);
        f[y].push_back(x);
    }
    int k = 0,ar[n + 5];
    for (int i = 1;i <= n;++i)
        if (ch[i] == 0)
        {
            ar[++k] = cnt;
            cnt = 0;
            DFS(i);
        }
        int temp = 0;
    for (int i = 2;i <= k;++i) temp += ar[i];
    ar[1] = n - temp;
    /*cout << k << endl;
    for (int i = 1;i <= k;++i) 
        cout << ar[i] << " ";
    cout << endl;*/
    sort(ar + 1,ar + 1 + k, greater<int>());
    /*for (int i = 1;i <= k;++i) 
        cout << ar[i] << " ";
    cout << endl;*/
    if (k == 1) cout << ar[1];
    else cout << ar[1] + ar[2];
}