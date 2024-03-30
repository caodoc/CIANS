#include <bits/stdc++.h>

using namespace std;

int n,t,x,res;

int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        t = 0;
        for (int j = 1;j <= 3;j++)
        {
            cin >> x;
            if (x == 1) t++;
        }
        if (t >= 2) res++;
    }
    cout << res;
}