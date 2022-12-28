#include <bits/stdc++.h>

using namespace std;

const int N = 1e4 + 7;

long long n,a[N] = {0};

int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++) cin >> a[i];
    for (int i = 1;i <= n;i++) 
    {
        if (a[i] <= 2) cout << 0;
        else if (a[i] % 2 == 0) cout << a[i] / 2 - 1; else cout << a[i] / 2;
        cout << endl;
    }
}