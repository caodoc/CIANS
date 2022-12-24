#include <bits/stdc++.h>

using namespace std;

int n,res;

char a,b,c;

int main()
{
    cin >> n;
    for (int i = 1;i <= n;i++)
    {
        cin >> a >> b >> c;
        if (b == '+') res++; else res--;
    }
    cout << res;
}