#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 7;

long long n,k,ar[N];
map<long long, int> mp;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    long long x;
    int pos = 0;
    int cnt = 0;
    mp[0] = 1;
    for (int i = 1;i <= n;i++) 
    {
        cin >> x;
        ar[i] = ar[i - 1] + (x - k);
        if (mp[ar[i]] > 0)
        {
            if (i - mp[ar[i]] > cnt) 
            {
                pos = mp[ar[i]] + 1;
                cnt = i - mp[ar[i]]; 
            }
        }
        else mp[ar[i]] = i;
    }
    cout << pos;
    if (pos != 0) cout << endl << cnt;
}