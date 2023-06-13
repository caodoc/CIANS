#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("CHAYNGAN.INP","r",stdin);
    //freopen("CHAYNGAN.OUT","w",stdout);
    cin >> n;
    int a[n + 5],b[n + 5];
    for (int i = 1;i <= n;++i) cin >> a[i];
    for (int i = 1;i <= n;++i) cin >> b[i];
    sort(a + 1,a + 1 + n);
    sort(b + 1,b + 1 + n);
    /*for (int i = 1;i <= n;++i) cout << a[i] << " ";
    cout << endl;
    for (int i = 1;i <= n;++i) cout << b[i] << " ";
    cout << endl;*/
    int res,j;
    res = j = 0;
    for (int i = 1;i <= n;++i)
    {
        while (j < n)
        {
            j += 1;
            if (a[i] < b[j])
            {
                res += 1;
                break;
            }
        }
        if (j == n) break;
    }
    cout << res;
}