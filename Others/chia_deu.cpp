#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,a[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;i++) cin >> a[i];
    sort(a + 1,a + 1 + n);
    int res = 0;
    //for (int i = 1;i <= n;i++) cout << a[i] << " ";
    //cout << endl;
    for (int i = 1;i <= n - 2;i++) for (int j = i + 2;j <= n;j++)
    {
        for (int u = i + 1;u <= j;u++) if (a[i] + a[j] == a[u] * 2)
        {
            res++;
            //cout << a[i] << " " << a[j] << endl;
            break;
        }
    }
    cout << res;
}