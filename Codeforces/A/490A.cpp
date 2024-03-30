#include <bits/stdc++.h>

using namespace std;

int n,a[5005],b[5];

int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++) 
    {
        cin >> a[i];
        b[a[i]]++;
    }
    if (b[1] == 0 || b[2] == 0 || b[3] == 0) cout << 0;
    else 
    {
        int res = min(b[1], min(b[2], b[3]));
        cout << res << endl;
        for (int i = 1;i <= res;i++)
        {
            for (int j = 1;j <= n;j++) if (a[j] == 1)
            {
                cout << j << " ";
                a[j] = 0;
                break;
            }
            for (int j = 1;j <= n;j++) if (a[j] == 2)
            {
                cout << j << " ";
                a[j] = 0;
                break;
            }
            for (int j = 1;j <= n;j++) if (a[j] == 3)
            {
                cout << j << " ";
                a[j] = 0;
                break;
            }
            cout << endl;
        }
    }
}