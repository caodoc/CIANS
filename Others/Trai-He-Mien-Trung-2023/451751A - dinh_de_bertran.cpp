#include<bits/stdc++.h>

using namespace std;

const long long N = 2e7 + 7;

long long n,p,res;

bool isPrime[N + 1];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    p = n + 1;
    for (int i = 0;i <= n * 2;++i)
        isPrime[i] = true;
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2;i * i <= n * 2;++i)
        if (isPrime[i] == true)
            // Mark all the multiples of i as composite numbers
            for (int j = i * i;j <= n * 2;j += i)
                isPrime[j] = false;
    res = 0;
    while (p < n * 2)
    {
        if (isPrime[p]) res++;
        p++;
    }
    cout << res;
}