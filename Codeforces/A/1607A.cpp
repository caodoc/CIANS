#include <bits/stdc++.h>

using namespace std;

int t;

int main()
{
    cin >> t;
    while (t--)
    {
        string s,n;
        cin >> s >> n;
        int a[n.size() + 1],k,res;
        res = k = 0;
        for (int i = 0;i < n.size();i++) for (int j = 0;j < s.size();j++) if (s[j] == n[i])
        {
            k++;
            a[k] = j + 1;
            break;
        }
        for (int i = k;i > 1;i--) res += abs(a[i] - a[i - 1]);
        cout << res << endl;
    }
}