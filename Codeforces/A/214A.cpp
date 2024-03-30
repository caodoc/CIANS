#include <bits/stdc++.h>

using namespace std;

int n,m;

int main()
{
    cin >> n >> m;
    int a,b,res;
    for (int a = 0;a * a <= n && a <= m;a++)
    {
        b = n - a * a;
        if (a + b * b == m) res++;
    }
    cout << res;
}