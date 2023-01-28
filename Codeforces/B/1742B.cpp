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
        for (int i = 1;i <= n;i++) 
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        if (s.size() != n) cout << "NO" << endl;
        else
        {
            set<int> t;
            for (int i = 1;i <= n;i++) 
            {
                if (t.find(a[i]) != t.end())
                {
                    cout << "NO" << endl;
                    return 0;
                }
                t.insert(a[i]);
            }
            cout << "YES" << endl;
        }
    }
}