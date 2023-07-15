#include<bits/stdc++.h>

using namespace std;

const long long N = 1e6 + 7;

long long l,d,res,f[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>l>>d;
    for (int i = 1;i < l;++i)
        for (int x = i * 2;x <= l;x += i)
            f[x] += i;
    res = 0;
    for (int i = 1;i < l;++i)
        if (abs(f[i] - i) <= d) res++;
    cout << res;
}