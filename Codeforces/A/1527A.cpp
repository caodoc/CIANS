#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int k = 0;
        while (k < n) k = (k << 1) + 1;
        k >>= 1;
        cout << k << endl;
    }
}