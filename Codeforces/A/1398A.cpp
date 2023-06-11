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
        int ar[n + 5];
        for (int i = 1;i <= n;++i) cin >> ar[i];
        bool check = true;
        int pos = 0;
        long long sum = ar[1] + ar[2];
        for (int i = 3;i <= n;++i)
            if (sum <= ar[i])
            {
                pos = i;
                check = false;
                break;
            }
        if (check == false) cout << "1 2 " << pos;
        else cout << "-1";
        cout << endl;
    }
}