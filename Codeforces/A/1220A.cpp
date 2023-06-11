#include <bits/stdc++.h>

using namespace std;

int n;
char ch;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    map<char, int> mp;
    for (int i = 1;i <= n;++i) 
    {
        cin >> ch;
        mp[ch] += 1;
    }
    while (mp['o'] >= 1 && mp['n'] >= 1 && mp['e'] >= 1)
    {
        mp['o'] -= 1;
        mp['n'] -= 1;
        mp['e'] -= 1;
        cout << "1 ";
    }
    while (mp['z'] >= 1 && mp['e'] >= 1 && mp['r'] >= 1 && mp['o'] >= 1)
    {
        mp['z'] -= 1;
        mp['e'] -= 1;
        mp['o'] -= 1;
        mp['r'] -= 1;
        cout << "0 ";
    }
}