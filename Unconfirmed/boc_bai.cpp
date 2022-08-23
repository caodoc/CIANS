#include <bits/stdc++.h>

using namespace std;

int n,i,a[52],b[11],s,j;

int main()
{
    cin >> n;
    for (i = 1;i <= n;i++) 
    {
        cin >> a[i];
        for (j = 2;j <= 5;j++) if (a[i] == j) 
        {
            b[j]++;
            break;
        }
        s += a[i];
    }
    if (s >= 20) 
    {
        cout << "STOP";
        return 0;
    }
    for (i = 2;i <= 5;i++) if (s + i <= 21) if (b[i] < 4 && b[i] != 0)
    {
        cout << "DRAW";
        return 0;
    }
    cout << "STOP";
}