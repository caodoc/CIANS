#include <bits/stdc++.h>
#define PAIR pair<int,int>

using namespace std;

const int N = 107;

int n,ar[N][N],arMax = 0,arMin = INT_MAX,res,f[N][N];
struct st
{
    int x;
    int y;
};
st mm[5];

bool BFS(int dif)
{
    for (int l = arMin;l <= arMax - dif;++l)
    {
        int r = l + dif;
        if (ar[1][1] < l || ar[1][1] > r) continue;
        for (int i = 1;i <= n;++i)
            for (int j = 1;j <= n;++j) f[i][j] = 0;
        f[1][1] = 1;
        queue<PAIR> q;
        q.push({1, 1});
        while (!q.empty())
        {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            if (i == n && j == n) return true;
            for (int k = 1;k <= 4;++k)
            {
                int u = i + mm[k].x;
                int v = j + mm[k].y;
                if (u < 1 || u > n || v < 1 || v > n) continue;
				if (ar[u][v] < l || ar[u][v] > r || f[u][v] != 0) continue;
				f[u][v] = 1;
				q.push({u,v});
            }
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;++i)
        for (int j = 1;j <= n;++j)
        {
            cin >> ar[i][j];
            arMax = max(arMax, ar[i][j]);
            arMin = min(arMin, ar[i][j]);
        }
    mm[1].x = mm[3].y = -1;
    mm[2].x = mm[4].y = 1;
    mm[1].y = mm[2].y = mm[3].x = mm[4].x = 0;
    int l = 0,r = arMax - arMin,mid = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (BFS(mid))
        {
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
        //cout << mid << "\n";
    }
    cout << res;
}