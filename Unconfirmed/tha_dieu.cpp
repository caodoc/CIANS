#include <bits/stdc++.h>

using namespace std;

int a[8000],n,i,j,b;

int main()
{
    cin >> n;
    for (i = 1;i <= n;i++) 
    {
        cin >> a[i];
        b = a[i];
        sort(a + 1,a + 1 + i,greater<int>());
        for (j = 1;j <= i;j++) if (a[j] == b)
        {
            cout << j << endl;
            break;
        }
    }
}