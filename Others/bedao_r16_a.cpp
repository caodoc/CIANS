#include <bits/stdc++.h>

using namespace std;

string s,r;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    getline(cin, s);
    for (int i = 0;i < s.size();++i)
    {
        if (s[i] == ' ') break;
        r += s[i];
    }
    if (r == "We" || r == "They" || r == "You") cout << "are";
    else
    {
        if (r == "I") cout << "am";
        else cout << "is";
    }
}