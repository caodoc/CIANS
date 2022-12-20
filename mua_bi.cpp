#include <bits/stdc++.h>

using namespace std;

const int N = 1e8 + 7;

int n,k,t;
long long res;

pair<int, int> a[N];

bool cmp(const pair<int, int>&i, const pair<int, int>&j) 
{ 
    return i.second > j.second; 
} 

int main()
{
    cin >> k >> n;
    for (int i = 1;i <= n;i++) cin >> a[i].first >> a[i].second;
    sort(a + 1,a + 1 + n,cmp);
    //for (int i = 1;i <= n;i++) cout << a[i].first << " " << a[i].second << endl;
    for (int i = 1;i <= n && k > 0;i++)
    {
        t = min(a[i].first, k);
        k -= t;
        res += t * a[i].second;
    }
    cout << res;
}