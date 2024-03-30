#include <bits/stdc++.h>

using namespace std;

int t;

int main()
{
    cin >> t;
    while (t--)
    {
        int a[4];
        for (int i = 1;i <= 3;i++) cin >> a[i];
        sort(a + 1,a + 4);
        cout << a[2] << endl;
    }
}