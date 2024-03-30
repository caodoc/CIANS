#include <bits/stdc++.h>

using namespace std;

int a[128] = {0};
string s;

int main()
{
    cin >> s;
    for (size_t i = 0; i < s.size();i++) a[s[i]]++;
    cin >> s;
    for (size_t i = 0; i < s.size();i++) a[s[i]]++;
    cin >> s;
    for (size_t i = 0; i < s.size();i++) a[s[i]]--;
    if (count(a, a + sizeof(a) / sizeof(a[0]), 0) == sizeof(a) / sizeof(*a)) cout << "YES";
    else cout << "NO";
}