#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;

int n,s,ch[N],k;
vector<int> f[N];
set<int> st;

void Input()
{
    cin >> n >> s;
    int m,x;
    for (int i = 1;i <= n;i++)
    {
        cin >> m;
        for (int j = 1;j <= m;j++)
        {
            cin >> x;
            f[i].push_back(x);
            f[x].push_back(i);
        }
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
        st.insert(v);
        for (int x : f[v]) if (ch[x] == 0)
        {
            ch[x] = 1;
            q.push(x);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);    
    Input();
    BFS(s);
    cout << st.size() << endl;
    for (auto it = st.begin();it != st.end();it++) cout << *it << " ";
}