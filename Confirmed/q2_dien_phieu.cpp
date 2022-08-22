#include <bits/stdc++.h>

using namespace std;

const int N = 1e6;

long long m[N],n,i,q,a[N],b[N],j,maxx;

int main()
{
    cin >> n >> q;
    for (i = 1;i <= n;i++) cin >> m[i];
    for (i = 1;i <= q;i++) cin >> a[i] >> b[i];
    for (j = 1;j <= q;j++) 
    {
        if (a[j] == b[j]) cout << 1 << endl;
        else 
        {
            for (i = a[j];i <= b[j];i++) if (m[i] > maxx) maxx = m[i];
            cout << maxx << endl;
            maxx = 0;
        }
    }
}