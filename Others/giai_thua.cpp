#include <bits/stdc++.h>

using namespace std;

unsigned long long i,n,s = 1;

int main()
{
    cin >> n;
    for (i = 1;i <= n;i++) s *= i;
    cout << s;
}