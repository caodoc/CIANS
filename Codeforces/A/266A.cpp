#include <bits/stdc++.h>

using namespace std;

int n,res;
string s;

int main()
{
    cin >> n >> s;
    for (int i = 0;i < n - 1;i++) if (s[i] == s[i + 1]) res++;
    cout << res;
}