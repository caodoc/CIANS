#include <bits/stdc++.h>

using namespace std;

int n;
string s;

int main()
{
	cin >> n;
	cin >> s;
	int res = 0;
    n--;
	for (int i = 0;i <= n;i++) if (i + 2 <= n) if (s[i] == 'x' && s[i + 1] == 'x' && s[i+  2] == 'x') res++;
    cout << res;
}