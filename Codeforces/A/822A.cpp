#include<bits/stdc++.h>

using namespace std;

long long n,m,res = 1;

int main()
{
    cin >> n >> m;
    int i = min(n, m);
    while (i > 0)
    {
        res *= i;
        i--;
    }
    cout << res;
}