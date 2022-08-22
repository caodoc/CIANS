#include <bits/stdc++.h>

using namespace std;

const int N = 1e4 + 1;

long long a[N][N],n,i,j;
long long sum1,sum2;

int main()
{
    cin >> n;
    for (i = 1;i <= n;i++) 
    {
        for (j = 1;j <= n;j++) cin >> a[i][j];
        sum1 += a[i][i];

    }
    j = 0;
    for (i = 1;i <= n;i++)
    {
        sum2 += a[i][n - j];
        j++;
    }
    cout << sum1 << endl << sum2;
}