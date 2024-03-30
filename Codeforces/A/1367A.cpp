#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin >> n;
    string s;
    for (int i = 1;i <= n;i++)
    {
        cin >> s;
        int j = 0;
        if (s.size() <= 2) cout << s;
        else
        {
            while (j < s.size() - 2)
            {
                cout << s[j];
                j += 2;
            }
            cout << s[s.size() - 2] << s[s.size() - 1];
        }
        cout << endl;
    }
}