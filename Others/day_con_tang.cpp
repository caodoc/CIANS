#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;

int n,a[N],res,tmp;
vector<int>f;

int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++) cin >> a[i];
    for (int i = 1;i <= n;i++)
    {
        tmp = lower_bound(f.begin(),f.end(),a[i]) - f.begin();
        if (tmp < f.size()) f[tmp] = a[i];
        else f.push_back(a[i]);
    }
    cout << f.size();
}