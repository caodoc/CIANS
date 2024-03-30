#include <bits/stdc++.h>

using namespace std;

int n,m;
string s;

int main()
{
    cin >> n >> m >> s;
    for (int i = 1;i <= m;i++)
    {
        for (int j = 0;j <= n;j++) if (s[j] == 'B' && s[j + 1] == 'G') 
        {
            s[j] = 'G';
            s[j + 1] = 'B';
            j++;
        }
        //cout << s << endl;
    }
    cout << s;
}