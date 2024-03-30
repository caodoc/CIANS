#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        int x,cnt;
        cnt = x = 0;
        while (n--)
        {
            cin >> x;
            if (x != 2) cnt++;
        }
        cout << cnt << endl;
    }
}