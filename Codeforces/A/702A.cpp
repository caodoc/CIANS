#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin >> n;
    int a[n + 1];
    for (int i = 1;i <= n;i++) cin >> a[i];
    int res = 0, tmp = 1;
    for (int i = 2;i <= n;i++) if (a[i] > a[i - 1]) tmp++;
    else
    {
        res = max(res, tmp);
        tmp = 1;
    }
    res = max(res, tmp);
    cout << res;
}