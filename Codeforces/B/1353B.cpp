#include <bits/stdc++.h>

using namespace std;

int t,n,k;

int main()
{
    cin >> t;
    while (t > 0)
    {
        t--;
        cin >> n >> k;
        int a[n + 1];
        int b[n + 1];
        for (int i = 1;i <= n;i++) cin >> a[i];
        for (int i = 1;i <= n;i++) cin >> b[i];
        sort(a + 1,a + 1 + n);
        sort(b + 1,b + 1 + n,greater<int>());
        for(int i = 1;i <= k;i++) for(int j = 1;j <= n;j++) if(b[j] > a[j])
        {
            swap(a[j], b[j]);
            break;
        }
        int res = 0;
        for(int i = 1;i <= n;i++) res += a[i];
        cout << res << endl;
    }
}