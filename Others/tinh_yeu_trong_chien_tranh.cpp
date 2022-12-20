#include <bits/stdc++.h>

using namespace std;

const int N = 1e4 + 1;

long long b[N],g[N],y[N],n,m,i,j,dem;

int main()
{
    cin >> n >> m;
    for (i = 1;i <= n;i++) cin >> b[i];
    for (i = 1;i <= m;i++) cin >> g[i];
    for (i = 1;i <= m;i++) cin >> y[i];
    sort(b + 1,b + 1 + n);
    sort(y + 1,y + 1 + m);
    for (i = 1;i <= n;i++) for (j = 1;j <= m;j++) if (b[i] == y[j]) 
    {
        dem++;
        break;
    }
    cout << dem;
}