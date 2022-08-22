#include <bits/stdc++.h>

using namespace std;

string s;

int i,n,a,b,c,d;

int main()
{
    getline(cin, s);
    n = s.size();
    for (i = 0;i < n;i++)
    {
        if (s[i] == 'T') a++;
        if (s[i] == 'E') b++;
        if (s[i] == 'N') c++;
    }
    while (a > 0 && b > 1 && c > 0)
    {
        a--;
        b -= 2;
        c--;
        d++;
    }
    cout << d;
}
