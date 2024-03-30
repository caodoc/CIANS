#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n],s = 0;
        for (int i = 1;i <= n;i++) 
        {
            cin >> a[i];
            s += a[i];
        }
        if (n == 1) cout << "0";
        else
        {
            sort(a + 1,a + 1 + n);
            cout << s - a[1] * n;
        }
        cout << endl;
    }
}