#include <bits/stdc++.h>

using namespace std;

string s1,s2;

int main()
{
    cin >> s1 >> s2;
    for (int i = 0;i < s1.size();i++) if (s1[i] == s2[i]) cout << 0; else cout << 1;
}