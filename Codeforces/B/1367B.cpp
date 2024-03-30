#include <bits/stdc++.h>

using namespace std;

int n,m;

int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        cin >> m;
        int a[m + 3] = {0};
        int c = 0,flag = 0;
        int odd = 0,even = 0;
        for(int j = 0;j < m;j++) cin >> a[j];
        for(int j = 0;j < m;j++) if (j % 2 != a[j] % 2) if(a[j] % 2 == 1) odd++; else even++;
        if(odd != even) cout << -1 << endl;
        else cout << even << endl;
    }
}