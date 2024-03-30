#include <bits/stdc++.h>
#define ll long long

using namespace std;

string s;

int main()
{
    cin >> s;
    ll cnt,x,y;
    cnt = x = y = 0;
    for (int i = 0;i < s.size();i++) if (s[i] == 'Q')
    {
        cnt += x;
        y++;
    }
    else if (s[i] == 'A') x += y;
    cout << cnt;
}