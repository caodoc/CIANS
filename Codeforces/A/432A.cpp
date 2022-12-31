#include <bits/stdc++.h>

using namespace std;

int n,k;

int main()
{
    cin >> n >> k;
    int x,res = 0;
    for (int i = 1;i <= n;i++)
    {
        cin >> x;
        if (x + k <= 5) res++;
    }
    cout << res / 3;
}