#include <bits/stdc++.h>

using namespace std;

string s;

int main()
{
    cin >> s;
    int tl;
    for (int i = 0;i < s.size();i++) 
    {
        //cout << int(s[i]) << endl;
        if (int(s[i]) >= 97) tl++; 
    }
    if (tl < s.size() - tl) for (int i = 0;i < s.size();i++) s[i] = toupper(s[i]);
    else for (int i = 0;i < s.size();i++) s[i] = tolower(s[i]);
    cout << s;
}