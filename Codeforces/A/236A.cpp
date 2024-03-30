#include <bits/stdc++.h>

using namespace std;

set<char> s;
string a,x;

int main()
{
    cin >> a;
    for (int i = 0;i < a.size();i++) s.insert(a[i]);
    if (s.size() % 2 == 0) cout << "CHAT WITH HER!"; else cout << "IGNORE HIM!";
}