#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,k,ar[N],f[N],res;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    if (n <= 1e3)
    {
        for (int i = 1;i <= n;i++) 
        {
            cin >> ar[i];
            f[i] = f[i - 1] + ar[i];
        }
        for (int i = 1;i <= n;i++) 
            for (int j = i + 1;j <= n;j++) if (f[j] - f[i] + ar[i] >= k)
            {
                int tmp = round((f[j] - f[i] + ar[i]) / (j - i + 1));
                res = max(res, tmp);
            }
    }
    else
    {
        for (int i = 1;i <= n;i++) cin >> ar[i];
        int left,right,sum;
        left = right = 1;
        sum = 0;
        while (right <= n)
        {
            sum += ar[right];
            while (sum >= k && left <= right)
            {
                res = max(res, sum / (right - left + 1));
                //cout << left << " " << right << " " << sum << " " << res << endl;
                sum -= ar[left];
                left++;
            }
            right++;
        }
    }
    cout << res; 
}