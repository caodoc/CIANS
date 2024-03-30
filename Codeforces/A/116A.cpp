#include <bits/stdc++.h>

using namespace std;

int n,a,b,c,res;

int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        cin >> a >> b;
        c -= a;
        c += b;
        if (c > res) res = c;
    }
    cout << res;
}