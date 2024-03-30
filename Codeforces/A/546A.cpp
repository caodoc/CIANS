#include <bits/stdc++.h>

using namespace std;

int n,k,w;

int main()
{
    cin >> k >> n >> w;
    int t;
    for (int i = 1;i <= w;i++) t += i * k;
    if (t - n > 0) cout << t - n; else cout << 0;
}