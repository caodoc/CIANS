#include<bits/stdc++.h>

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
        for (int i = 0;i < n;i++) if (s[i] == 'U') s[i]= 'D';
        else if (s[i] == 'D') s[i] = 'U';
        cout << s << endl;
    }
}