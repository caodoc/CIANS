#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,ar[N];
vector<int> f;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;++i) cin >> ar[i];
    for (int i = 1;i <= n;++i)
    {
        int temp = lower_bound(f.begin(), f.end(), ar[i]) - f.begin();
        if (temp < f.size()) f[temp] = ar[i];
        else f.push_back(ar[i]);
    }
    cout << n - f.size();
}