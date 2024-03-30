#include <bits/stdc++.h>

using namespace std;

int t,n,k;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int cnt = 0;
        for (int i = 1;i < n;i++)
        {
            int x,a,b;
            a = b = 0; 
            cin >> x;
            if (x < k) a = x; else a = k;
            if (x > k) b = x; else b = k;
            while (2 * a < b)
            {
                a *= 2; 
                cnt++;
            }
            k = x;
        }
        cout << cnt << endl;
    }
}