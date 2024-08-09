#include <bits/stdc++.h>

using namespace std;

string s;
vector<int> a,b;

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    for (int i = 0;i < s.size() - 1;++i)
    {
        if (s[i] == 'A' && s[i + 1] == 'B') a.push_back(i);
        if (s[i] == 'B' && s[i + 1] == 'A') b.push_back(i);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a.size() == 0 && b.size() == 0)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0;i < a.size();++i)
        for (int j = 0;j < b.size();++j)
            if (min(a[i], b[j]) + 1 < max(a[i], b[j]))
            {
                cout << "YES";
                return 0;
            }
    cout << "NO";
    //cout << a.size() << " " << b.size() << "\n";
    //for (int i = 0;i < a.size();++i) cout << a[i] << " ";
    //cout << "\n";
    //for (int j = 0;j < b.size();++j) cout << b[j] << " ";
}