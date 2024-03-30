#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

long long n,k,a,b,c,ar[N],res[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1;i <= k;i++)
    {
        cin >> a >> b >> c;
        res[a] += c;
        res[b + 1] -= c;
    }
    for (int i = 1;i <= n;++i) 
    {
        ar[i] = ar[i - 1] + res[i];
        cout << ar[i] << " ";
    }
}