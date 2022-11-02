#include <bits/stdc++.h>

using namespace std;

unsigned long long n,res,i = 1;

void calc()
{
    while (i <= n)
    {
        res += i;
        i += 2;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    calc();
    cout << res;
}