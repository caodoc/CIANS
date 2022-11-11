#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

long long n,m,a[N],s,l,r,d,KQ,ma = 0,t,mid;

int main()
{
    cin >> n >> m;
    for (int i = 1;i <= n;i++)
    {
        cin >> a[i];
        t += a[i];
        ma = max(ma, a[i]);
    }
    l = ma;
    r = t;
    KQ = t;
    while (l <= r)
    {
        d = 1;
        s = 0;
        mid = (l + r) /2 ;
        for (int j = 1;j <= n;j++) if (s + a[j] <= mid) s += a[j]; 
        else 
        {
            s = a[j];
            d++;
        }
        if (d <= m) 
        {
            if (d == m) KQ = min(KQ, mid);
            r = mid - 1;
        } 
        else l = mid + 1;
    }
    cout << KQ;
}