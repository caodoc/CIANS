#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin >> n;
    int a[n + 1],s,tmp,res;
    tmp = res = 0;
    for (int i = 1;i <= n;i++) 
    {
        cin >> a[i];
        s += a[i];
    }
    sort(a + 1,a + n + 1);
    for (int i = n;i >= 1;i--)
    {
        tmp += a[i];
        res++;
        if (tmp > s / 2) break;
    }
    cout << res << endl;
}