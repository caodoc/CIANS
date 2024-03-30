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
        int ar[n + 1],cnt = 0;
        string s;
        for (int i = 1;i <= n;++i) cin >> ar[i];
        for (int i = 1;i <= n;++i)
        {
            cin >> cnt;
            cin >> s;
            for (int j = 0;j < cnt;++j)
            {
                if (s[j] == 'U')
                {
                    if (ar[i] == 0) ar[i] = 9;
                    else ar[i]--;
                }
                else
                {
                    if (ar[i] == 9) ar[i] = 0;
                    else ar[i]++;
                }
            }
        }
        for (int i = 1;i <= n;++i) cout << ar[i] << " ";
        cout << endl;
    }
}