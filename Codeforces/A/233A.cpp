#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin >> n;
    if (n % 2 != 0) cout << -1;
    else
    {
        cout << 2 << " " << 1 << " ";
        for (int i = 3;i < n;i += 2) cout << i + 1 << " " << i << " ";
    }
}