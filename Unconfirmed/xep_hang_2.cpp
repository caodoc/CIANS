#include <bits/stdc++.h>

using namespace std;

string s,x;

const int N = 1e6 + 1;

int z[N];

int n,i,j,b = 1;

int main()
{
    cin >> n;
    cin >> s;
    sort(s.begin(), s.end());
    for (i = 0;i < n;i++) if (s[i] == s[i + 1]) z[b]++;
    else
    {
        x[b] = s[i];
        z[b]++;
        b++;
    }
    b--;
    for (i = 1;i <= b;i++) for (j = 1;j <= b - 1;j++) if (z[j] < z[j + 1])
    {
        swap(z[j], z[j + 1]);
        swap(x[j], x[j + 1]);
    }
    for (i = 1;i <= b;i++) while (z[i] > 0)
    {
        cout << x[i];
        z[i]--;
    }
}
