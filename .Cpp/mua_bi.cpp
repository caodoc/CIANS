#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 1;
long long n,m,a[N],b[N],i,j,s,t1,t2,c;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (i = 1;i <= m;i++) cin >> a[i] >> b[i];
    while (c == 0) 
    {
        t1 = t2 = 0;
        for (i = 1;i <= m;i++) if (t1 < b[i]) 
        {
            t1 = b[i];
            t2 = i;
        }
        if (t2 == 0) c = 1; 
        else
        {
            if (n > a[t2])
            {
                n -= a[t2];
                s += a[t2] * b[t2];
            }
            else 
            {
                if (a[t2] == n) s += a[t2] * b[t2]; else s += n * b[t2];
                c = 1;
            }
            b[t2] = 0;
        }
    }
    cout << s;
}
