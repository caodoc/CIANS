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
        n *= 2;
        long long a[n],ch[n];
        for (int i = 1;i <= n;i++) ch[i] = 0;
        vector<int> f;
        for (int i = 1;i <= n;i++) cin >> a[i];
        for (int i = 1;i <= n;i++) if (ch[a[i]] == 0)
        {
            ch[a[i]] = 1;
            f.push_back(a[i]);
        }
        for (int i = 0;i < f.size();i++) cout << f[i] << " ";
        cout << endl;
    }
}