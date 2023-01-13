#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 1;i <= n;i++) cin >> a[i];
        int t1 = 0,t2 = n,ck = 0;
        for (int i = 1;i <= n;i++) if (ck == 0)
        {
            t1++;
            cout << a[t1] << " ";
            ck = 1;
        }
        else
        {
            cout << a[t2] << " ";
            t2--;
            ck = 0;
        }
        cout << endl;
    }
}