#include <bits/stdc++.h>

using namespace std;

int n,x,res;

int main()
{
    cin >> n;
    int imax = 0,amax = 0,imin = 0,amin = 1005;
    for (int i = 1;i <= n;i++) 
    {
        cin >> x;
        if (x > amax)
        {
            imax = i;
            amax = x;
        }
        if (x <= amin)
        {
            imin = i;
            amin = x;
        }
    }
    if (imax > imin) cout << imax - 1  + n - imin - 1; 
    else cout << imax - 1 + n - imin;
}