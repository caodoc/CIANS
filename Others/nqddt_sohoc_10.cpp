#include <bits/stdc++.h>

using namespace std;

int n,k,x,cnt;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1;i <= n;++i)
    {
        cin >> x;
        if (x > k) cnt++;
    }
    cout << cnt;
}