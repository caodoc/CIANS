#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin >> n;
    int x;
    for (int i = 1;i <= n;i++)
    {
        cin >> x;
        if (x % 4 != 0) cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            int t1 = 0, t2 = 0;
            int j = 2;
            while (j <= x)
            {
                cout << j << " ";
                j += 2;
                t1 += j;
            }
            j = 1;
            while (j <= x - 2)
            {
                cout << j << " ";
                j += 2;
                t2 += j;
            }
            cout << t1 - t2 - 2 << endl;
        }
    }
}