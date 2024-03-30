#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,k,ar[N];
double f[N];

bool check(double x)
{
    long double sum[n + 1] = {0},Min = 1e9;
    for (int i = 1;i <= n;i++)
    {
        sum[i] = sum[i - 1] + ar[i] - x;
        if (i >= k)
        {
            Min = min(Min, sum[i - k]);
            if (sum[i] - Min >= 0) return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    if (n <= 400 && k == 1)
    {
        for (int i = 1;i <= n;i++) 
        {
            cin >> ar[i];
            f[i] = f[i - 1] + ar[i];
        }
        double res = 0;
        for (int i = 1;i <= n - k + 1;i++)
            for (int j = i + k - 1;j <= n;j++)
            {
                double tmp = (f[j] - f[i - 1]) / (j - i + 1);
                res = max(res, tmp);
            } 
        cout << setprecision(3) << fixed << res;
    }
    else
    {
        for (int i = 1;i <= n;i++) cin >> ar[i];
        long double left,right,mid;
        left = -1e9;
        right = 1e9;
        while (right - left > 1e-9)
        {
            mid = (left + right) / 2;
            if (check(mid)) left = mid; else right = mid;
        }
        cout << setprecision(3) << fixed << left;
    }
}