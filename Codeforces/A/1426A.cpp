#include <bits/stdc++.h>

using namespace std;

int t,n,x;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        int t = 2,res = 1;
        while (t < n)
        {
            t += x;
            res++;
        }
        cout << res << endl;
    }
}