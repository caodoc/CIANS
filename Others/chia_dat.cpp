#include <bits/stdc++.h>

using namespace std;

const int N = 5e2 + 7;

int n,ar[N][N],res = INT_MAX;

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;++i)
        for (int j = 1;j <= n;++j)
        {
            cin >> ar[i][j];
            ar[i][j] += ar[i - 1][j] + ar[i][j - 1] - ar[i - 1][j - 1];
        }
    /*for (int i = 1;i <= n;++i)
    {
        for (int j = 1;j <= n;++j)
        {
            cout << ar[i][j] << " ";
        }
        cout << "\n";
    }*/
    for (int i = 1;i <= n;++i)
        for (int j = 1;j <= n;++j)
        {
            int pOne = ar[i][j];
            int pTwo = ar[i][n] - ar[i][j];
            int pThree = ar[n][j] - ar[i][j];
            int pFour = ar[n][n] - pOne - pTwo - pThree;
            int rMax = max(max(pOne, pTwo), max(pThree, pFour));
            int rMin = min(min(pOne, pTwo), min(pThree, pFour));
            res = min(res, rMax - rMin);
        }
    cout << res;
}