#include <bits/stdc++.h>

using namespace std;

string s;
set<int> r;

int main()
{
    getline(cin, s);
    for (int i = 0;i < s.size();i++) if (s[i] >= 'a' && s[i] <= 'z') r.insert(s[i]);
    cout << r.size();
}