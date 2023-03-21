#include <bits/stdc++.h>

using namespace std;

int t,n;

int main()
{
    cin >> t;
    while (t--)
    {
        string s;
        cin >> n;
        cin >> s;
        if (n > 2 || s == "00" || s == "11") cout << "NO";
        else cout << "YES";
        cout << endl;
    }
}