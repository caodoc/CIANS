#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin >> n;
    int x;
    for (int i = 1;i <= n;++i)
    {
        cin >> x;
        int a[110] = {0},t = 0;
        cin >> a[1] >> a[2];
        if (a[1] == a[2]) for (int j = 3;j <= x;j++) 
        {
            cin >> a[j];
            if (a[j] != a[1]) cout << j << endl;
        }
        else for (int j = 3;j <= x;j++) 
        {
            cin >> a[j];
            if (t == 0)
            if (a[j] != a[1]) 
            {
                cout << 1 << endl; 
                t = 1;
            }
            else 
            {
                cout << 2 << endl;
                t = 1;
            }
        } 
    }
}