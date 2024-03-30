#include<bits/stdc++.h>

using namespace std;

int n,i,tag;
string s;

int main()
{
    cin >> n;
    string str[n + 10];
    for(i = 1;i <= n;i++)
    {
        cin >> s;
        if (s[0] == 'O' && s[1] == 'O' && tag == 0)
        {
            s[0] = '+';
            s[1] = '+';
            tag = 1;
            str[i] = s;
        }
        else if (s[3] == 'O' && s[4] == 'O' && tag == 0)
        {
            s[3] = '+';
            s[4] = '+';
            tag = 1;
            str[i] = s;
        }
        else str[i] = s;
    }
    if (tag == 1)
    {
        cout << "YES";
        for (i = 0;i <= n;i++) cout << str[i] << endl;
    }
    else cout << "NO";
}