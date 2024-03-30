#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cin >> n;
    int res = 0;
    for (int i = 1;i < n;i++) for (int j = 1;j < n;j++) if (i * j < n) res++;
    cout << res;
}