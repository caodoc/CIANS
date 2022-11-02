#include <bits/stdc++.h>

using namespace std;

const int N = 1e7 + 7;

int n,t1,t2,res1;
string s;
char res2;
pair<int, char>a[N];

int main()
{
    //freopen("THONGKE.INP","r",stdin);
    //freopen("THONGKE.OUT","w",stdout);
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    sort(s.begin(), s.end(), greater<char>());
    for (int i = 0;i < s.size();i++) if (s[i] != s[i + 1])
    {
        for (char j = '0';j <= '9';j++) if (s[i] == j) t2 = 1;
        if (t2 == 0)
        {
            n++;
            a[n].first = t1;
            a[n].second = s[i];
            t1 = 1;
        }
        else break;
    }
    else t1++;
    a[1].first++;
    sort(a + 1,a + 1 + n);
    //cout << s << endl;
    //for (int i = 1;i <= n;i++) cout << a[i].second << " " << a[i].first << endl;
    if (a[n].first == 0) cout << 0;
    else
    {
        res1 = a[n].first;
        res2 = a[n].second;
        for (int i = n;i > 1;i--) if (a[i].first == a[i - 1].first && a[i].second > a[i - 1].second) res2 = a[i - 1].second; else break;
        cout << res2 << endl << res1;
    }
}
