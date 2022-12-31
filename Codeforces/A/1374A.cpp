#include <bits/stdc++.h>

using namespace std;

long long n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    long long x,y,k;
    for (int i = 1;i <= n;i++)
    {
        cin >> x >> y >> k;
        long long ans = 0;
        ans = k - k % x + y;
        if(ans <= k) cout << ans << endl;
        else cout << (k - k % x - (x - y)) <<endl;
    }
}