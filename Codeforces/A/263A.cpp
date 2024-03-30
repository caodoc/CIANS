#include <bits/stdc++.h>

using namespace std;

int a[10][10],res;

int main()
{
    for (int i = 1;i <= 5;i++) for (int j = 1;j <= 5;j++) 
    {
        cin >> a[i][j];
        if (a[i][j] == 1) res = abs(i - 3) + abs(j - 3);
    }
    cout << res;
}