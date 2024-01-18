#include <bits/stdc++.h>

using namespace std;

const int N = 1500 + 7;

string s,r;
int f[N][N];

int main()
{
    //freopen(".INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s >> r;
    for (int i = 0;i < s.size();++i)
        for (int j = 0;j < r.size();++j)
        {
            if (s[i] == r[j]) f[i + 1][j + 1] = f[i][j] + 1;
	        else f[i + 1][j + 1] = max(f[i][j + 1], f[i + 1][j]);
        }
    cout << f[s.size()][r.size()];
}