#include <bits/stdc++.h>

using namespace std;

const int N = 1e6;

long long a[N],i,n,s,dem;

int main()
{
    cin >> n;
    for (i = 1;i <= n;i++) 
    {
        cin >> a[i];
        s = s + a[i];
    }
    if (s % n != 0) 
    {
        cout << -1;
        return 0;
    } 
    else 
    {
        s = s / n;
        for (i = 1;i <= n;i++) if (s - a[i] > 0) dem = dem + (s - a[i]);
    }
    cout << dem;
}