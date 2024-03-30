#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n + 1];
        set<int> s;
        for (int i = 1;i <= n;i++) cin >> a[i];
        for (int i = 1;i <= n;i++) s.insert(a[i]);
        cout << s.size() << endl;
    }
}