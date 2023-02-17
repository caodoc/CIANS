#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n + 1],s = 0;
        for (int i = 1;i <= n;i++) 
        {
            cin >> a[i];
            s += a[i];
        }
        if (s % n != 0) cout << -1 << endl;
        else
        {
            int ck = s / n,res = 0; 
            for (int i = 1;i <= n;i++) if (ck < a[i]) res++;
            cout << res << endl;
        } 
    }
}