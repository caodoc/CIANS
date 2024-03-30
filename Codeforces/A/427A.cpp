#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,a[N];

int main()
{
    cin >> n;
    int t1 = 0,t2 = 0;
    for (int i = 1;i <= n;i++) cin >> a[i];
    for (int i = 1;i <= n;i++) if (a[i] == -1)
    {
        if (t1 > 0) t1--; else t2++;
    }
    else t1 += a[i];
    cout << t2;
}