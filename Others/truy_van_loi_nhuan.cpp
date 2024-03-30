#include <bits/stdc++.h>

using namespace std;

int t,n,a,b;

int calc(int x)
{
    if (x < 2) return 0;
    for (int i = 2;i <= sqrt(x);i++) if (x % i == 0) return 0;
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int ar[n + 1],r[n + 1];
    for (int i = 1;i <= n;i++) 
    {
        cin >> ar[i];
        if (calc(i) == 1 && ar[i] >= 0) r[i] = r[i - 1]; else r[i] = r[i - 1] + ar[i];
    }
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << r[b] - r[a - 1] << endl;
    }
}