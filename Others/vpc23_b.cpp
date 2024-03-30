#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 7;

int r,c,m,n;
int s[N];
pair<int, int> p[N];

bool compare(pair<int, int> &a, pair<int, int> &b)
{
    return a.first <= b.first;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> r;
    while (r--)
    {
        cin >> c >> m >> n;
        int x,y;
        long long res,weight;
        res = x = y = 0;
        weight = c;
        for (int i = 1;i <= m;++i) cin >> s[i];
        for (int i = 1;i <= n;++i)
        {
            cin >> x >> y;
            p[i] = make_pair(x, y);
        }
        int t = 0;
        for (int i = n + 1;i <= m + n;++i)
            p[i] = make_pair(s[++t], -1);
        n += m;
        sort(p + 1,p + 1 + n,compare);
        //for (int i = 1;i <= n;++i) cout << p[i].first << " " << p[i].second << "\n";
        //cout << "---------- \n";
        for (int i = 1;i <= n;++i)
        {
            if (p[i].second == -1) weight = c;
            else
            {
                if (weight - p[i].second >= 0)
                {
                    res += p[i].second;
                    weight -= p[i].second;
                }
            }
        }
        cout << res << "\n";
        //cout << "________ \n";
    }
}