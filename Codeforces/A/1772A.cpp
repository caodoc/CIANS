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
        int a[3],k = 1;
        a[1] = a[2] = 0;
        for (int i = 0;i < s.size();i++) if (s[i] == '+') k++;
        else a[k] += int(s[i]) - 48;
        cout << a[1] + a[2] << endl;
    }
}