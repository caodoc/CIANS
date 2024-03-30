#include<bits/stdc++.h>

using namespace std;

const int N = 1e6 + 4;

long long a[N],n;
set<long long>s;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    cout << s.size();
}