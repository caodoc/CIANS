#include <bits/stdc++.h>

using namespace std;

int n,res,cnt,x,y,kt;
vector<pair<int ,int>> a;

bool cmp (pair<int, int> u,pair<int, int> v)
{
    return (u.first < v.first) || (u.first == v.first && u.second > v.second);
}

int main()
{
    //freopen("doanphu.inp","r",stdin);
    //freopen("doanphu.out","w",stdout);
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        cin >> x;
        a.push_back(make_pair(x, 1));
    }
    for (int i = 1;i <= n;i++)
    {
        cin >> x;
        a.push_back(make_pair(x, 2));
    }
    sort(a.begin(),a.end(),cmp);
    //for (int i = 0;i < n * 2;i++) cout << a[i].first << " " << a[i].second << endl;
    for (int i = 0;i < n * 2;i++)
    {
        if (a[i].second == 1)
        {
            cnt++;
            if (cnt > res)
            {
                res = cnt;
                x = a[i].first;
                kt = 1;
            }
        }
        else
        {
            cnt--;
            if (kt == 1)
            {
                y = a[i].first;
                kt = 0;
            }
        }
    }
    cout << res << endl;
    cout << x << " " << y;
}
