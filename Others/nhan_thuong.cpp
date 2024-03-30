#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int a[N],n,k,t,res;

map<int,int> f;

int main()
{
    cin >> n >> k;
    for (int i = 1;i <= n;i++) cin >> a[i];
    f[0] = 1;
    for (int i = 1;i <= n;i++)
    {
        t = t + a[i];
        res += f[t - k];
        f[t]++;
    }
    cout << res;
}