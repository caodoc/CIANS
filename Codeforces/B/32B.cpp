#include <bits/stdc++.h>

using namespace std;

string s;

int main()
{
    cin >> s;
    for (int i = 0;i < s.size();i++)
    {
        if (s[i] == '.') cout << 0;
        else
        {
            if (s[i] == '-' && s[i + 1] == '.') cout << 1;
            if (s[i] == '-' && s[i + 1] == '-') cout << 2;
            i++;
        }
    }
}