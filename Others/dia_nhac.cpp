#include <bits/stdc++.h>

using namespace std;

const int N = 1e6;

int n,a[N],i,x,dem,s;

int main()
{
    cin >> n;
    x = 650;
    for (i = 1;i <= n;i++) cin >> a[i];
    sort(a + 1,a + 1 + n);
    for (i = 1;i <= n;i++) if (x - a[i] >= 0) 
    {
        x = x - a[i];
        dem++;
        s = s + a[i];
    } 
    else break;
    cout << dem << endl << s;
}