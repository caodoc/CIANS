#include <bits/stdc++.h>

using namespace std;

int n,a[5];

int main()
{
    cin >> n;
    int x;
    for (int i = 1;i <= n;i++)
    {
        cin >> x;
        a[x]++;
    }
    int s = a[4] + a[3] + a[2] / 2;
    a[1] -= a[3];
    if (a[2] % 2 == 1)
    {
        s++;
        a[1] -= 2;
    }
    if (a[1] > 0) s += (a[1] + 3) / 4;
    cout << s;
}