#include <bits/stdc++.h>

using namespace std;

int n,k;

int main()
{
    cin >> n >> k;
    k = 240 - k;
    int t = 0,res = 0;
    for (int i = 1;i <= n;i++)
    {
        t += i * 5;
        if (t > k) break;
        res++;
    }
    cout << res;
}