#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int x,res = 0;
        for (int i = 1;i <= n * 2;i++)
        {
            cin >> x;
            res += x % 2;
        }
        if (res == n) cout << "YES"; else cout << "NO";
        cout << endl;
    }
}