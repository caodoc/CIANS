#include <bits/stdc++.h>

using namespace std;

int n,m,i;

int main()
{
    cin >> n >> m;
    while (n <= m)
    {
        n *= 3;
        m *= 2;
        i++;
    }
    cout << i;
}