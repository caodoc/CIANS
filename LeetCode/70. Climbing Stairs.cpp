#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    int f[n + 1];
    f[0] = 0;
    f[1] = 1;
    f[2] = 2;
    for (int i = 3;i <= n;++i) 
        f[i] = f[i - 1] + f[i - 2];
    cout << f[n];
    
}