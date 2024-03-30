#include <bits/stdc++.h>

using namespace std;

int t,n;
string s;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        //cout << s << endl;
        int cnt = 0;
        map<string, int> m;
        for (int i = 0;i < n - 1;++i)
        {
            string r;
            r = s[i];
            r += s[i + 1];
            //cout << r << " ";
            if (m[r] == 0)
            {
                cnt++;
                m[r] = 1;
            }
        }
        cout << cnt << endl;
    }
}