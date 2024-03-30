#include<bits/stdc++.h>

using namespace std;

const int N = 1e3 + 7;

long long a[N][N];
string s1,s2;

int main()
{
    getline(cin, s1);
    s2 = s1;
    reverse(s2.begin(), s2.end());
    int n,m;
    n = m = s1.size();
    s1 = " " + s1;
    s2 = " " + s2;
    a[0][0] = 0;
    for (int i = 1;i <= n;++i)
    {
        for (int j = 1;j <= m;++j)
        {
            if (s1[i] == s2[j]) a[i][j] = a[i - 1][j - 1] + 1;
            else a[i][j] = max(a[i - 1][j], a[i][j - 1]);
        }
    }
    cout << a[n][m];
}