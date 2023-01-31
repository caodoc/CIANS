#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,a[N];
double res = 0;

int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++) cin >> a[i];
    sort(a + 1,a + 1 + n);
    res = a[1];
    res += a[2];
    res /= 2;
    a[2] = res;
    //cout << res << endl;
    for (int i = 3;i <= n;i++) 
    {
        res = (res + a[i]) / 2;
        a[i] = res;
    }
    cout << setprecision(6) << fixed << res;
}