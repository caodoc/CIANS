#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 1;

long long n,i,j,m,a[N],s;

int main()
{
    cin >> n;
    for (i = 1;i <= n;i++) cin >> a[i];
    for (i = 1;i <= n;i++) 
    {
        m = 0;
        for (j = 1;j <= n;j++) if (a[j] > a[m]) m = j;
        if (a[m] == 0) break;
        s += a[m];
        a[m] = 0;
        for (j = 1;j <= n;j++) if (a[j] != 0) a[j]--;
    }
    cout << s;
}