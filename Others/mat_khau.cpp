#include <bits/stdc++.h>

using namespace std;

int n,k;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    if (n * 9 < k) cout << -1;
    else
    {
        int num = 9;
        while (n > 0 && k > 0)
        {
            while (n > 0 && k - num >= 0)
            {
                cout << num;
                n--;
                k -= num;
            }
            num--;
        }
        for (int i = 1;i <= n;i++) cout << 0;
    }
}