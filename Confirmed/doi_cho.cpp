#include<bits/stdc++.h>

using namespace std;

const int N = 1e6 + 4;
long long n,k,dem[N],i,u,v;

int main()
{
    cin >> n >> k;
    for (i = 1;i <= n * 2;i++) if(i <= n) dem[i] = 1; else dem[i] = -1;
    long long kq = n;
    for(i = 1;i <= k;i++)
    {
        cin >> u >> v;
        if(dem[u] != dem[v])
        {
            if(u <= n && v > n) kq += dem[v];
            if(v <= n && u > n) kq += dem[u];
        }
        swap(dem[u], dem[v]);
        cout << kq << endl;
    }
}