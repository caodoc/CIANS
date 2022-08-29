#include <bits/stdc++.h>

using namespace std;

string s;
bool ck = true;
int n,i,dem,tmp;

int main()
{
    cin >> n;
    for (i = 0;i < n;i++) cin >> s[i];
    while (ck == true)
    {
        for (i = 0;i < n;i++) if (s[i] == 'B' && s[i + 1] == 'G')
        {
            swap(s[i], s[i + 1]);
            i++;
            tmp++;
        }
        if (tmp == 0) ck = false; else dem++;
        tmp = 0;
    }
    cout << dem;
}