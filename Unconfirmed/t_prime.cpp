#include <bits/stdc++.h>

using namespace std;

int n,i,dem;

bool check (int x)
{
    int j,tmp = 0;
    for (j = 1;j <= x;j++) if (x % j == 0) tmp++;
    if (tmp == 3) return true;
    return false;
}

int main()
{
    cin >> n;
    for (i = 4;i <= n;i++) if (check(i) == true) dem++;
    cout << dem;
}