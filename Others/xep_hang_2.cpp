#include<bits/stdc++.h>

using namespace std;

const int N = 1e6 + 4;
#define ll long long
pair<ll,char> a[N];
string s;
long long n;

main()
{
    cin >> n;
    cin >> s;
    sort(s.begin(), s.end());
    ll d1 = 1,d2 = 0;
    for(int i = 0;i <= n;i++)
    {
        if(s[i] == s[i + 1]) d1++;
        else
        {
            d2++;
            a[d2].second = s[i];
            a[d2].first = d1;
            d1 = 1;
        }
    }
    sort(a + 1,a + 1 + d2, greater<pair<ll,char>>());
    for(int i = 1;i <= d2;i++) for(int j = 1;j <= a[i].first;j++) cout << a[i].second;
}