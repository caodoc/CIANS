#include <bits/stdc++.h>

using namespace std;

int n,h;

int main()
{
    cin >> n >> h;
    int x,res;
    for (int i = 1;i <= n;i++)
    {
        cin >> x;
        if (x <= h) res++; else res += 2;
    }
    cout << res;
}