#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 1;

int a[N],b[N],n,i,j,dem;

int main()
{
    cin >> n;
    for (i = 1;i <= n;i++) cin >> a[i];
    sort(a + 1,a + 1 + n);
    for (i = 1;i <= n;i++) cin >> b[i];
    sort(b + 1,b + 1 + n);
    for (i = 1;i <= n;i++) for (j = n;j >= 1;j--) if (a[i] > b[j] && b[j] != 0)
    {
        
        b[j] =0;
        dem++;
        break;
    }
    cout << dem;
}