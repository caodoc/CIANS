#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[51] = {0};
        for (int i = 1;i <= n;i++) cin >> a[i];
        cout << *max_element(a + 1,a + 1 + n) - *min_element(a + 1,a + 1 + n) << endl;
    }
}