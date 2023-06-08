#include <bits/stdc++.h>

using namespace std;

int m,n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> m >> n;
    int grid[m + 7][n + 7];
    int x;
    for (int i = 0;i < m;++i)
        for (int j = 0;j < n;++j) cin >> grid[i][j];
    //int m = grid.size();
    //int n = grid[0].size();
    for (int i = 1;i < m;++i)
        grid[i][0] += grid[i - 1][0];
    for (int i = 1;i < n;++i)
        grid[0][i] += grid[0][i - 1];
    for (int i = 1;i < m;++i)
        for (int j = 1;j < n;++j) 
            grid[i][j] += min(grid[i - 1][j], grid[i][j - 1]);
    cout << grid[m - 1][n - 1];
}