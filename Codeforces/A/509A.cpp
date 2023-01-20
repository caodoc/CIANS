#include<bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin >> n;
    long long a[n][n];
    for (int i = 0;i < n;i++) a[0][i] = a[i][0] = 1;
    for (int i = 0;i < n;i++) for (int j = 0;j < n;j++) if (i > 0 && j > 0)
        a[i][j] = a[i - 1][j] + a[i][j - 1];  
    cout << a[n - 1][n - 1];
}