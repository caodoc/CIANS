#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 1;

int a,b[N],n,i,kq;
set<long long> s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i = 1;i <= n;i++)
    {
        cin >> a;
        s.insert(a);
        b[a]++;
    }
    for (i = 1;i <= n;i++) kq = max(kq,b[i]);
    cout << s.size() << endl << kq;
}