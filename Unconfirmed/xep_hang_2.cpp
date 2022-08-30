#include <bits/stdc++.h>

using namespace std;

const int N = 1e3 + 1;
char s[N],x[26];
int z[26],tmp;
long long n,i,j,b = 1;

int main()
{
    cin >> n;
    for (i = 1;i <= n;i++) cin >> s[i];
    sort(s + 1, s + 1 + n);
    for (i = 1;i <= n;i++) if (s[i] == s[i + 1]) z[b]++;
    else
    {
        x[b] = s[i];
        z[b]++;
        b++;
    }
    b--;
    for (i = 1;i <= b;i++) 
    {
        tmp = 0;
        for (j = 1;j <= b - 1;j++) if (z[j] < z[j + 1])
        {
            swap(z[j], z[j + 1]);
            swap(x[j], x[j + 1]);
            tmp = 1;
        }
        if (tmp == 0) break;
    }
    for (i = 1;i <= b;i++) while (z[i] > 0)
    {
        cout << x[i];
        z[i]--;
    } 
}
