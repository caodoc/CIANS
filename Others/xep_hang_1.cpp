#include <bits/stdc++.h>

using namespace std;

const int N = 1e6 + 1;
char s[N];
bool ck = true;
long long n,i,dem,j,tmp;

int main()
{
    cin >> n;
    for (i = 0;i < n;i++) cin >> s[i];
    while (ck == true)
    {
        tmp = 0;
        for (j = 0;j < n;j++) if (s[j] == 'B' && s[j + 1] == 'G')
        {
            swap(s[j], s[j + 1]);
            j++;
            tmp = 1;
        }
        if (tmp != 0) dem++;
        else 
        {
            cout << dem;
            return 0;
        }
    }
}