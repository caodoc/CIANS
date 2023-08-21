#include <bits/stdc++.h>

using namespace std;

int n,m,xa,ya,xb,yb,res;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("BAI1.INP","r",stdin);
    //freopen("BAI1.OUT","w",stdout);
    cin >> m >> n;
    cin >> xa >> ya >> xb >> yb;
    //cout << xa << ya << xb << yb;
    for (int i = 1;i <= m;++i)
        for (int j = 1;j <= n;++j)
            if (abs(xa - i) + abs(ya - j) == abs(xb - i) + abs(yb - j))
                res += 1;
    cout << res;
}