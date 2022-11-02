#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 7;

pair<int, int>a[N];
vector<int>f;

int n,x,y,t;

int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        cin >> x >> y;
        a[i] = make_pair(x, -y);
    }
    sort(a + 1, a + 1 + n);
    for (int i = 1;i <= n;i++) a[i].second = -a[i].second;
    //for (int i = 1;i <= n;i++) cout << a[i].first << " " << a[i].second << endl;
    for (int i = 1;i <= n;i++)
    {
        t = lower_bound(f.begin(),f.end(),a[i].second) - f.begin();
        if (t == 0) f.insert(f.begin(),a[i].second);
        else f[t - 1] = a[i].second;
    }
    cout << f.size();
}
