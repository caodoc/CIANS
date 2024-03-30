#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

int n,res,pos[N];
struct st
{
    int x;
    int y;
};
st ctn[N];

bool cmp(st u, st v)
{
    return u.x < v.x || (u.x == v.x && u.y < v.y);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;++i) cin >> ctn[i].x >> ctn[i].y;
    sort(ctn + 1,ctn + 1 + n, cmp);
    //for (int i = 1;i <= n;++i) cout << ctn[i].x << " " << ctn[i].y << "\n";
    for (int i = 1;i <= n;++i)
    {
        long long l = 1,r = res + 1,mid = 0;
        while (l < r)
        {
            mid = (l + r) / 2;
            if (pos[mid] >= ctn[i].y) l = mid + 1;
            else r = mid;
        }
        pos[l] = ctn[i].y;
        if (l > res) res += 1;
    }
    cout << res;
}