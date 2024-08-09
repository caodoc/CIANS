#include <bits/stdc++.h>

using namespace std;

long long n,k,x;
set<int> s;

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1;i <= n;++i)
    {
        cin >> x;
        s.insert(x % k);
    }
    cout << s.size();
}