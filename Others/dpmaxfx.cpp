#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;

int n;
long long ar[N],res = INT_MIN,sOne,sTwo;

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;++i) cin >> ar[i];
    sOne = ar[1];
    sTwo = ar[1] + ar[2] * 2;
    for (int i = 3;i <= n;++i)
    {
        res = max(res, sTwo + ar[i] * 3);
        sTwo = max(sTwo, ar[i] * 2 + sOne);
        sOne = max(sOne, ar[i]);
    }
    cout << res;
}