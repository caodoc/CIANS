#include <bits/stdc++.h>

using namespace std;

int n,m;

int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        cin >> m;
        int a[57] = {0};
        for (int j = 1;j <= m;j++) cin >> a[j];
        if (m == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            bool t = true;
            sort(a + 1,a + 1 + m);
            for (int j = 1;j < m;j++) if (a[j + 1] - a[j] > 1)
            {
                cout << "NO" << endl;
                t = false;
                break;
            }
            if (t == true) cout << "YES" << endl;
        }
    }
}