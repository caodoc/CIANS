#include <bits/stdc++.h>

using namespace std;

long long n,res,x;

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;++i)
    {
        cin >> x;
        if (x % 2 != 0) res += x;
    }
    cout << res;
}