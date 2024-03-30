#include <bits/stdc++.h>

using namespace std;

const int N = 5e2 + 7;
const int M = 1e6 + 7;

int n,m,x,f[N][N],re[N][N],res = INT_MAX,hang[N],cot[N];
bool ch[M];

void sangNguyenTo()
{
    for (int i = 0;i <= M;++i) ch[i] = true;
    ch[0] = ch[1] = false;
    for (int i = 2;i * i <= M;++i)
        if (ch[i] == true)
            for (int j = i * i;j <= M;j += i)
                ch[j] = false;
}

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sangNguyenTo();
    cin >> n >> m;
    for (int i = 1;i <= n;++i)
        for (int j = 1;j <= m;++j)
        {
            cin >> x;
            if (ch[x] == true) re[i][j] = 0;
            else while (ch[x] == false)
            {
                x++;
                re[i][j]++;
            }
        }
    for (int i = 1;i <= m;++i)
    {
        for (int j = 1;j <= n;++j) cot[i] += re[j][i];
        res = min(res, cot[i]);
    }
    for (int i = 1;i <= n;++i)
    {
        for (int j = 1;j <= m;++j) hang[i] += re[i][j];
        res = min(res, hang[i]);
    }
    cout << res;
}
