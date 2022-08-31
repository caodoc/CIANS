#include<bits/stdc++.h>

using namespace std;

const int N = 1e6 + 1;
long long a[N],n,i,b[N],c,d,e,s,x;

int main()
{
    b[0] = b[1] = 0;
    b[2] = b[3] = b[4] = b[5] = b[6] = b[7] = b[8] = b[9] = b[11] = 4;
    b[10] = 16;
    cin >> n;
    for(i = 1;i <= n;i++)
    {
        cin >> x;
        s += x;
        b[x]--;
    }
    if (s >= 21) cout << "STOP";
    else
    {
        e = 21 - s;
        for (int i = 1;i <= 12;i++) if (i != e) if (i < e) c += b[i]; else d += b[i];
        if (c >= d) cout << "DRAW"; else cout << "STOP";
    }
}