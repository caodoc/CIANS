#include <bits/stdc++.h>
#define up 3
#define down 2
#define left 1
#define right 0

using namespace std;

const int N = 57;

string s;
int ch[8][8];
int dy[4] = {1, -1, 0, 0};
int dx[4] = {0, 0, 1, -1};

bool check(int x, int y)
{
    return (x >= 1 && x <= 7 && y >= 1 && y <= 7);
}

int calc(int x, int y, int idx)
{
    if (idx == s.size()) return (x == 7 && y == 1);
    if (idx != s.size() && x == 7 && y == 1) return 0;
    if (ch[x][y]) return 0;
    vector<bool> v(4, -1);
    for (int i = 0;i < 4;++i)
    {
        int ix = x + dx[i];
        int iy = y + dy[i];
        if (check(ix, iy)) v[i] = ch[ix][iy];
    }
    if (!v[up] && !v[down] && v[left] && v[right]) return 0;
    if (v[up] && v[down] && !v[left] && !v[right]) return 0;
    if (check(x - 1,y - 1) && ch[x - 1][y - 1] && !v[up] && !v[left]) return 0;
    if (check(x - 1,y + 1) && ch[x - 1][y + 1] && !v[up] && !v[right]) return 0;
    if (check(x + 1,y - 1) && ch[x + 1][y - 1] && !v[down] && !v[left]) return 0;
    if (check(x + 1,y + 1) && ch[x + 1][y + 1] && !v[down] && !v[right]) return 0;
    ch[x][y] = 1;
    int res = 0;
    if (s[idx] == '?')
    {
        for (int i = 0;i < 4;++i)
        {
            int ix = x + dx[i];
            int iy = y + dy[i];
            if (check(ix, iy)) res += calc(ix, iy, idx + 1);
        }
    }
    else if (s[idx] == 'L' && y - 1 >= 1) res += calc(x, y - 1, idx + 1);
    else if (s[idx] == 'R' && y + 1 <= 7) res += calc(x, y + 1, idx + 1);
    else if (s[idx] == 'D' && x + 1 <= 7) res += calc(x + 1, y, idx + 1);
    else if (s[idx] == 'U' && x - 1 >= 1) res += calc(x - 1, y, idx + 1);
    ch[x][y] = 0;
    return res;
}

int main()
{
    //freopen("CSES1625.INP","r",stdin);
    //freopen(".OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    getline(cin, s);
    cout << calc(1, 1, 0);
}