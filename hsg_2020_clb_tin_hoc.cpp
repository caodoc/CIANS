#include <bits/stdc++.h>

using namespace std;

const int N = 1e6;

int a[N],n,i;

int main()
{
    cin >> n;
    for (i = 1;i <= n;i++) cin >> a[i];
    sort(a + 1,a + 1 + n);
    for (i = 1;i < n;i++) if (a[i] + 1 != a[i + 1]) 
    {
        cout << a[i] + 1;
        return 0;
    }
    cout << a[n] + 1;
}