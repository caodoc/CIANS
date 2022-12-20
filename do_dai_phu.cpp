#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;

long long n,c,res,x;
pair<int, int>a[N];

int main()
{
    //freopen("DOPHU.INP","r",stdin);
    //freopen("DOPHU.OUT","w",stdout);
    cin >> n;
    for (int i = 1;i <= n;i++) cin >> a[i].first;
    for (int i = 1;i <= n;i++)
    {
        cin >> x;
        a[i].second = x + a[i].first;
    }
    sort(a + 1,a + 1 + n);
    c = a[1].second;
    res = a[1].second - a[1].first;
    //for (int i = 1;i <= n;i++) cout << a[i].first << " " << a[i].second << endl;
    for (int i = 2;i <= n;i++)
    {
        if (c >= a[i].first && c <= a[i].second)
        {
            res += a[i].second - c;
            c = a[i].second;
        }
        else if (c <= a[i].first)
        {
            res += a[i].second - a[i].first;
            c = a[i].second;
        }
    }
    cout << res;
}
