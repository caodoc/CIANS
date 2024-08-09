#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

long long n,x,res,cnt,t;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> x;
    res = 0;
    for (int i = 1;i <= n;++i)
        for (int j = 1;j <= n;++j)
            for (int k = 1;k <= n / i;++k)
            {
                t = j - k;
                if (t > 0)
                {
                    cnt = (i * j - n) / t;
                    if (i != x && j != x && (i * j - n) % t == 0 && cnt > 0 && cnt < i) res++;
                }
            }
    cout << res;
}