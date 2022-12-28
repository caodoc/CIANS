#include <bits/stdc++.h>

using namespace std;

int n,res,t;

int main()
{
    cin >> n >> t;
    int x;
    int tmax,tmin;
    tmax = tmin = t;
    for (int i = 1;i < n;i++)
    {
        cin >> x;
        if (tmin > x)
        {
            tmin = x;
            res++;
        }
        if (tmax < x)
        {
            tmax = x;
            res++;
        }
    }
    cout << res;
}