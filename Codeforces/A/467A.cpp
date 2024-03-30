#include <bits/stdc++.h>

using namespace std;

int n,a,b,res;

int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        cin >> a >> b;
        if (b - a >= 2) res++;
    }
    cout << res;
}