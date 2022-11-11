#include<bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;

long long int n,m,a[N],tong,l,r,mid,s,d,KQ;

int main()
{
    cin >> n >> m;
    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];
        tong += a[i];
    }
    l = *max_element(a + 1,a + 1 + n);
    r = tong;
    while (l <= r)
    {
        mid = (l + r) / 2;
        s = 0;
        d = 1;
        for (int i = 1;i <= n;i++)
        {
            s += a[i];
            if (s > mid)
            {
                d++;
                s = a[i];
            }
        }
        if (d <= m)
        {
            KQ = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout<<KQ;
}