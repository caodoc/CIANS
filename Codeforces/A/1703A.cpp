#include <bits/stdc++.h>

using namespace std;

int t;

int main()
{
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int tmp = 1;
        if (s[0] == 'Y' || s[0] == 'y') 
        if (s[1] == 'E' || s[1] == 'e') 
        if (s[2] == 'S' || s[2] == 's') 
        {
            cout << "YES"; 
            tmp = 0;
        }
        if (tmp == 1) cout << "NO";
        cout << endl;
    }
}