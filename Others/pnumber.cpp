#include <bits/stdc++.h>

using namespace std;

int a,b;

bool check(int s)
{
    if (s <= 1) return false;
    for (int i = 2;i <= sqrt(s);++i)
        if (s % i == 0) return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b;
    for (int i = a;i <= b;++i)
        if (check(i)) cout << i << "\n";
}