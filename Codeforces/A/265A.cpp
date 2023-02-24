#include <bits/stdc++.h>

using namespace std;

string s,t;

int main()
{
    cin >> s >> t;
    long long cnt = 0;
    for (long long i = 0;i < t.size();i++) if (t[i] == s[cnt]) cnt += 1;
    cout << cnt + 1;
}