#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 5;

long long n,k,h[N],f[N][N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (int i = 1;i <= n;i++) cin >> h[i];
    sort(h + 1,h + 1 + n);
    for (int i = 1;i <= n;i++) for (int j = 1;j <= k;j++) f[i][j] = INT_MAX;
    for (int i = 0;i <= k;i++) f[0][i] = INT_MAX;
    for (int i = 2;i <= n;i++)
        for (int j = 1;j <= k;j++)
            f[i][j] = min(min(f[i][j], f[i - 1][j]), f[i - 2][j - 1] + h[i] - h[i - 1]);
/*    for (int i = 0;i <= n;i++)
    {
        for (int j = 1;j <= k;j++) cout << f[i][j] << " ";
        cout << endl;
    }*/
    cout << f[n][k];
}
